#!/bin/sh


if [ $# -eq 2 ]; then
	justpath=$(dirname $1)
	echo "path for $1 is  $justpath"
	mkdir -p $justpath
	echo $2 > $1
	exit 0
else
	echo "Please include 2 arguments; (1) directory, (2) string to write."
	exit 1
fi
