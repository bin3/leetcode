#!/usr/bin/env sh

g++ TrappingRainWater.cpp

if [ ! $? -eq 0 ]
then
    echo '---Compile Error---'
    exit 1
fi
./a.out
