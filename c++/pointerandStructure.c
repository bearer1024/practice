/*
 *practice for struct"
 */
#include<stdio.h>
#include<string.h>
struct people {
  char firstname[20];
  char lastname[20];
};
  int main (void) {
    struct people bearer;
    strcpy(bearer.firstname,"xin");
    strcpy(bearer.lastname,"xiong");
    printf("firstname is %s,\nlastname is %s\n", bearer.firstname,bearer.lastname);
  }
