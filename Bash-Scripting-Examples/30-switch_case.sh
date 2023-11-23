#!/bin/bash
echo "is the sky cloudy ?"
read -r "yes/no" answer
case $answer in
yes|Yes|y|Y)
    echo "it's cloudy ! take your jacket from the room"
    ;;
No|no|N|n)
    echo "it's sunny day, have a great time"
    ;;
*)
    echo "default"
    ;;
esac            