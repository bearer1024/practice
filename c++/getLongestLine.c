/*
 *this program is to get longest line from 
 */
#include <stdio.h>
#define MAXLINE 5

int getLineLength(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
int main(){
  int len; // current line length
  int max; //maximum length seen so far
  char line[MAXLINE]; // current input line
  char longest[MAXLINE]; //longest line saved here

  max = 0;
  while ((len = getLineLength(line, MAXLINE)) > 0)
    if(len > max) {
      max = len;
      copy(longest,line);
    }
    if(max > 0) /* there was a line */
      printf("%s",longest);
	 return 0;
    }

  /*getLineLength: read a line into s, return the length of s*/
  int getLineLength(char s[], int maxline){
    int c,i;

    for(i=0; i < maxline-1 && (c=getchar())!=EOF && c!='\n'; ++i)
	s[i] = c;
	if(c == '\n') {
	  s[i] = c;
	  ++i;
	}
	s[i] = '\0';
	return i;
  }

   void copy(char to[], char from[]){
     int i;

     i=0;
     while((to[i] = from [i]) !='\0')
	   ++i;
   }
	    
      
    
