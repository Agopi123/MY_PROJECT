#!/bin/bash

echo -n "Enter a character: "
read CHAR

case $CHAR in
	a | A) 
		
		echo "You entered $CHAR which is a vowel"
		;; 
	e | E) 
		echo "You entered $CHAR which is a vowel"
		;;
	i | I) 
		echo "You entered $CHAR which is a vowel"
		;;
	o | O) 
		echo "You entered $CHAR which is a vowel"
		;;
	u | U) 
		echo "You entered $CHAR which is a vowel"
		;;
	*) 
		echo "You entered $CHAR which is not a vowel"
		;;
esac
