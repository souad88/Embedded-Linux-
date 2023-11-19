#!/bin/bash
x=8
y=2
z= expr 1 + 2
echo $z
echo $(( x + y ))
echo $(( $x + $y ))
echo $(( $x ** $y ))
echo $(( $x * $y ))
echo $(( $x / $y ))
echo $(( $x % $y ))
((x++))
echo $x
((x--))
echo $x
((y-=6))
echo $y
((y+=4))
echo $y