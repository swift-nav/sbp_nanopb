#!/usr/bin/env bash

set -e
set -x
set -o errexit
set -o pipefail

git submodule update --init

if [ ! -d build ] ; then
	mkdir build
fi
pushd build
cmake ..
make gen_files
popd

