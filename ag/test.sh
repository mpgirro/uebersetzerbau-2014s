#!/bin/bash

make clean
make

for filename in tests/*
do
    ./ag < $filename >/dev/null 2>/dev/null

    retval=$?

    if test $retval -eq ${filename:${#filename}-1}
    then
    	 echo "OK: $filename";
    else
    	 echo "------------------";
    	 echo "FAILED: $filename";
    	 echo "Expected Output: ${filename:${#filename}-1}";
    	 echo "Current Output: $retval";
    	 echo "------------------";
    fi
done