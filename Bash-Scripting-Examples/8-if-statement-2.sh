#!/bin/bash
val=5
if [ $val -gt 1 ]
then
    echo "True 1"
elif [ $val -gt 2 ]
then
    echo "True 2"
elif [ $val -gt 4 ]
then
    echo "True 3"
else
    echo "false"
fi    
