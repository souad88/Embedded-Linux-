#!/bin/bash

str="i like that to go out of home when it's gonna cloudy "
###########first method
length_1=${#str}
echo "length of '$str' is $length_1"
#################second method
length_2=$(echo $str|wc -c)
echo "length of '$str' is $length_2"

