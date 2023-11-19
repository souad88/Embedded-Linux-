#!/bin/bash
read -p "Enter number : " number
if [ "$number" -lt 125 ]
then
    echo "your number less then 125"
else
    echo "your number is greater than 125"
fi    