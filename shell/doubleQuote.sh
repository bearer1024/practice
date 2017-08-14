#!/bin/sh
# this file is used to test double quote and variable name in shell
name="xiong";
echo "hello $name";

your_name='qinjx'
str="Hello, I know your are \"$your_name\"! \n"
echo "$str";

your_name="qinjx"
greeting="hello, "$your_name" !"
greeting_1="hello, ${your_name} !"
echo $greeting $greeting_1


echo `date`;
