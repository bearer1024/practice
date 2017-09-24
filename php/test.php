<?php

//test print multiple lines
print "hello
MR.
	Tiger
";

//test heredoc
echo <<<HELLO
The "Tiger" is my lovely catty.
I spent $100 to buy a gift today.
/n also doesn't work at here.
I don't neet any escape character to output double quote symbol and other symbol.
HELLO;
echo"\n";

//test static
function countSheep(){
STATIC $count = 0;
$count++;
print"There have $count sheeps now\n";
}

countSheep();
countSheep();
countSheep();

?>