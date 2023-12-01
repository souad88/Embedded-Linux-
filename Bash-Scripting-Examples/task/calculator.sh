#!/bin/bash
read -p "enter 1st number : " number1
read -p "enter 2nd number : " number2
read -p "enter operation  : " opr


case $opr in 
    "+")
        echo $number1 + $number2 = 
        expr $number1 + $number2     
    ;;
    "-") 
        echo $number1 - $number2 =
        expr $number1 - $number2 
    ;;
    "*") 
        echo $number1 * $number2 =
        expr $number1 \* $number2 
    ;;
    "/") 
        echo $number1 / $number2 =
        expr $number1 \/ $number2 
    ;;
    "%") 
        echo $number1 % $number2 =
        expr $number1 \% $number2 
    ;;
    "^") 
        echo $number1 ^ $number2 =
        expr $number1 \^ $number2 
    ;;
    esac

