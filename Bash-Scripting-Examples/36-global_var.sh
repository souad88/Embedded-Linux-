#!/bin/bash
var1="global 1 variable"
var2="global 2 variable"
function func
{
    local var1="local 1 variable"
    echo $var1
    var2="local 2 variable"
    echo $var2 # arguments are accessible through $1, $2,...
}
echo $var1
func
echo $var1
####
echo $var2
func
echo $var2