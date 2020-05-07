#!/usr/bin/bash

rm -rf build

mkdir build && cd build

cmake .. &&  make

python3 test.py

cd ..
