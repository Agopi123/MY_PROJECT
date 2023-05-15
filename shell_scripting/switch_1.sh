#!/bin/bash
#
# Author         : Emertxe (http://www.emertxe.com) 
# Date           : Tue 16 Feb 2016 16:27:07 IST
# File           : ls_007_01_ch6_switch_case.sh
# Title          : Test and Branch constuct - Case 
# Description    : A script to demonstrate case statement
#

echo -n "Enter a character: "
read CHAR

case $CHAR in
	a) echo "You entered $CHAR which is a vowel";;
	e) echo "You entered $CHAR which is a vowel";;
	i) echo "You entered $CHAR which is a vowel";;
	o) echo "You entered $CHAR which is a vowel";;
	u) echo "You entered $CHAR which is a vowel";;
	*) echo "You entered $CHAR which is not a vowel";; 
esac


