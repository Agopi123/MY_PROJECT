#!/bin/bash

STR1="Hello"
STR2="Hello"

if [ ${STR1} = ${STR2} ]
then
    echo "Strings match"
else
    echo "Strings don't match"
fi

