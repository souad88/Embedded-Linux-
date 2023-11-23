#!/bin/bash
add()
{
  sum=$(($1 + $2))
  return $sum
}
a=10
b=20

add $a $b
result=$?
echo $result