#!/bin/bash
files=$(ls /home/souad/Desktop/)
for i in ${files}; do
    echo "the content of file ${i} is :"
    cat "./home/souad/Desktop/${i}"
    echo
done
echo "finished"        