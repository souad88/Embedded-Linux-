#!/bin/bash
x=0
y=12
while [[ $x -le 3 && $y -ge 0 ]]
do
echo "x=$x"
echo "y=$y"
((x++))
((y--))
done
echo "finished while loop"