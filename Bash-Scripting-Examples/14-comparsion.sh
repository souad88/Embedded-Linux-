#!/bin/bash
if [ 1 -eq 1 -a 4 -gt 3 ] #-a==and &&
then
    echo "#rule 1"
fi
if [ 1 -eq 1 ] && [ 5 -gt 4 ]
then
    echo "#rule 2"
fi
if [[ 1 -eq 1 && 5 -gt 4 ]]
then
    echo "#rule 3"
fi
#c style
if ((001 == 1))
then
    echo "#rule 4"
fi
x=0
if((x++))
then
    echo "#rule 5"
fi                   