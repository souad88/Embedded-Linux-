#!/bin/bash
#compare strings
str1="hello this is the night of wednsday"
str2="my feelings getting so bad"
if [ "$str1" = "$str2" ]; then
    echo "Both the strings are equal."
elif [ "$str1" != "$str2" ]; then
    echo "strings are different"
else
    echo "error"
fi
########greater than
x="one day i will reach my dreams"
y="may be it is too late"
if [[ "$x" > "$y" ]]; then
    echo "$x is greater than $y"
else
    echo "$x is less than $y"
fi
################Empty
str="Fayrouz, Warda, Aziza Galal, Mayada: are my favorite old singers"
if [ -n "$str" ]; then 
    echo "string isnot empty"
else 
    echo "string is empty"
fi             