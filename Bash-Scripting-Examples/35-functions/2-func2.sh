#!/bin/bash
function_with_args()
{
    echo $0 $1 $2 "$3" "$4"
}
function_with_args monday tuesday wdensday fraiday 
function_with_args $0 $1 wdensday fraiday 