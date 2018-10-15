#!/bin/bash

# Target
PRG="hello"

# Compile
g++ -c ${PRG}.cpp -o ${PRG}.o

# Link
g++ ${PRG}.o -o ${PRG}

# Check
if [ -x ${PRG} ]
then
	echo "Successful build! Check:"
	./${PRG} World
else
	echo "ERROR: for some reason, ${PRG} could not be built out of ${PRG}.cpp"
	exit -1 
fi

