#!/bin/bash

echo -n "Enter number 1 : " 
read NUM1

echo -n "Enter number 2 : "
read NUM2

SUM=$(($NUM1 + $NUM2)) 
echo "The sum is $SUM"

SUM=`expr $NUM1 + $NUM2`  
		
echo "The sum is $SUM"

