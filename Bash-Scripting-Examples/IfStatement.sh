#!/bin/bash
directory=/etc
if [ -d $directory ]
then
	echo "The directory $directory is exist"
else
	echo "The directory $directory is not exist"
fi
