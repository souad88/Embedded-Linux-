#!/bin/bash
max=5
a=1
b=0
until [ $a -gt $max ] || [ $b -gt $max ]
do
echo "a = $a & b = $b "
((a++))
((b++))
done