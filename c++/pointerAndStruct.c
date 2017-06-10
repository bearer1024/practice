/*
 *using pointer to minuplate struct
 */
#include <stdio.h>
#include <string.h>

struct people {
  char fname[20];
  char lname[20];
  int age;
  float rate;
};

int main(void) {
  struct people bearer;
  struct people *pointer = &bearer;
  void showStruct(struct people *foo);
  strcpy(pointer->fname,"xin");
  strcpy(pointer->lname,"xiong");
  //  bearer.age=18; this works as well
  pointer->age=19;
  showStruct(pointer);
  return 0;
}

void showStruct(struct people *p){
  printf("first name is :%s\n", p->fname);
  printf("last name is :%s\n", p->lname);
  printf("age is :%d", p->age);
}
