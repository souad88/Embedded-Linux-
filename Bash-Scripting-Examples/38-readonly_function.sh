#!/bin/bash
g()
{
    echo "kjkjfk"
}
readonly -f g

g() #error
{
    echo "dddd"
}
