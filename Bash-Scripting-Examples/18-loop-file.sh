#!/bin/bash
x=$(ls)
for i in $x; do
    echo "the file name is ${i}"
done
