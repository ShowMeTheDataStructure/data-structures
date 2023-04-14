#!/bin/bash

# data structures compile
echo "DATASTRUCTURS COMPILES"
mkdir build
cd ./build || exit
cmake ..
make
cd ../

# install googletest
echo "INSTALL GOOGLETEST"
cd gtest_build || exit
git clone https://github.com/google/googletest
cd ./googletest || exit
mkdir build
cd ./build || exit
cmake ..
make
make install
cd ../..

# google test compile
echo "GOOGLETEST"
make linkedlistTest
make queueTest
make stackTest
./linkedlist_test
./queue_test
./stack_test

exit 0
