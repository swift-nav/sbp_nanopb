cmake_minimum_required(VERSION 2.8)
project(LIBSBP_NANOPB_BINDINGS C)

set(PROTO_GEN_DIR ${CMAKE_CURRENT_SOURCE_DIR}/gen)

if(NOT CMAKE_CROSSCOMPILING)
    set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/nanopb/extra)
    find_package(Nanopb REQUIRED)
    include_directories(${NANOPB_INCLUDE_DIRS})

    set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)

    set(LIBSBP_PROTO_DIR "${CMAKE_CURRENT_SOURCE_DIR}/libsbp/proto")
    file(GLOB PROTO_FILES "${LIBSBP_PROTO_DIR}/*.proto")
    nanopb_generate_cpp(PROTO_SRCS PROTO_HDRS ${PROTO_FILES})
    set_source_files_properties(${PROTO_SRCS} ${PROTO_HDRS}
        PROPERTIES GENERATED TRUE)
    add_custom_target(gen_files DEPENDS ${PROTO_SRCS})

    add_custom_command(TARGET gen_files
                       PRE_BUILD
                       COMMAND find ARGS . -delete
                       WORKING_DIRECTORY ${PROTO_GEN_DIR}
                       COMMENT "Removing stale gen files."
                       )
    add_custom_command(TARGET gen_files
                       POST_BUILD
                       COMMAND cp ARGS *.pb.* ${PROTO_GEN_DIR}
                       WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
                       COMMENT "Removing copying gen files to ${PROTO_GEN_DIR}"
                       )
else()
    file(GLOB PROTO_SRCS "${PROTO_GEN_DIR}/*.pb.c")
endif()

if(BUILD_SBP_NANOPB_LIB)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror -g -O0")
    add_library(sbp_nanopb ${PROTO_SRCS})
    target_include_directories(sbp_nanopb PUBLIC ${PROTO_GEN_DIR})
endif()
