#!/bin/bash
read -p "enter string" str
if [ -z "$str" ] #z check string is empty or not
then
    echo "string is empty"
else
    echo "string isnot empty"
fi        