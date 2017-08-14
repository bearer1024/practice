#!/bin/bash
# to output a timestamp
title="system information report for $HOSTNAME";
timestamp=$(date +"%x %R %Z");
echo "<html>
     <head>
     <title>$title</title>
     </head>
          <body>
     	  <H1>$title</H1>
     	  <p>$timestamp</p>
          </body>
     </html>";
