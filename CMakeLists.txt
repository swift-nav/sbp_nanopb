cmake_minimum_required(VERSION 2.8)
project(LIBSBP_NANOPB_BINDINGS C)

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

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror -g -O0")

add_library(sbp_nanopb ${PROTO_SRCS} ${PROTO_HDRS})
target_include_directories(sbp_nanopb PUBLIC ${CMAKE_CURRENT_BINARY_DIR})
