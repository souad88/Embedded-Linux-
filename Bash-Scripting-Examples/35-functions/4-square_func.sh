#!/bin/bash
func_square()
{
        echo $(( $1 * $1 ))

}
result=$(func_square 3)
echo "$result"