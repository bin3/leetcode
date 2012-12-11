#!/usr/bin/env sh

#g++ 3Sum.cpp
#g++ 3SumClosest.cpp
g++ -g 4Sum.cpp

if [ ! $? -eq 0 ]
then
    echo '---Compile Error---'
    exit 1
fi
./a.out
