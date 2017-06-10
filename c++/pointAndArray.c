#include <stdio.h>

int my_array[] = {1,23,17,4,-5,100};
int *pointer = &my_array[0];

int main(void){
  for(int i=0;i<6;i++){
    printf("my_array be visited by normal \n, my_array[%d], value is %d\n",i,my_array[i]);

    printf("my_array be visited by pointer \n, my array[%d], value is %d\n",i, *(pointer++));
    printf("\n");
  }
  return 0;
}
  
