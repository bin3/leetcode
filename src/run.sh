#!/usr/bin/env sh

#g++ 3Sum.cpp
#g++ 3SumClosest.cpp
#g++ -g 4Sum.cpp
#g++ Subsets.cpp
#g++ Subsets2.cpp
#g++ ContainerWithMostWater.cpp
g++ LongestCommonPrefix.cpp

if [ ! $? -eq 0 ]
then
    echo '---Compile Error---'
    exit 1
fi
./a.out
