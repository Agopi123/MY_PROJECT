#!/bin/bash

echo -n "Enter a number: "
read NUM

let SUM=0; 
for I in `seq $NUM` 
do
	SUM=`expr $SUM + $I`
	I=$((${I} + 1))
done

echo "The sum of the first $NUM numbers is: $SUM"
