#!/bin/bash
file=main.cpp
if [ -f $file ]
then
    echo " ${file} file exist"
else
    echo "${file} file doesnot exist"
fi