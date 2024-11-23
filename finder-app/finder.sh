#!/bin/sh

if [ $# -eq 2 ]; then
	if [ -d $1 ]; then
		filecnt=$(find $1 -type f | wc -l)
		matchcnt=$(grep -iohrl $2 $1 | wc -l)
		echo "The number of files are ${filecnt} and the number of matching lines are ${matchcnt}"
		
		exit 0
	else
		echo "Please enter an appropriate file directory"
		exit 1
	fi
	

else
	echo "Please enter two arguments: (1) a directory, (2) a search string"
	exit 1
fi
       	
