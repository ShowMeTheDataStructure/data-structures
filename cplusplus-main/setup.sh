#!/bin/bash

# install googletest
echo "INSTALL GOOGLETEST"
git clone https://github.com/google/googletest
cd ./googletest || exit
mkdir build
cd ./build || exit
cmake ..
make
make install
cd ../..

# data structures compile
echo "DATASTRUCTURS COMPILES"
mkdir build
cd ./build || exit
cmake ..
make
cd ../

# google test compile
echo "GOOGLETEST"
make test

exit 0
