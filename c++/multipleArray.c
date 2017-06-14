#include<stdio.h>
#define ROW 5;
#define COL 6;
/*void setValueToOne(int myArray[][6]);
void setValueToOne(int myArray[][6]){
    for(int row=0;row<ROW;row++){
    for(int col=0;col<COL;col++){
      myArray[col][row]=1;
    }
  }
}

int main(void){
  int arr[8][6];
  setValueToOne(arr[8][6]);
  for(int row=0;row<ROW;row++){
      for(int col=0;col<COL;col++){
	printf("%d",arr[row][col]);
      }
      printf("\n");
    }
  return 0;
}
*/
int main(void){
  int a = 0;
  a = COL+ROW;
  printf("%d",a);
  return 0;
}
