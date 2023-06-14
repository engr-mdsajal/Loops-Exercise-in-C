/*

Program to print even numbers in given range

*/
#include<stdio.h>
int main(){

  int start,end,i;

  printf("Enter Start Number= \n");
  scanf("%d",&start);

  printf("Enter End Number= \n");
  scanf("%d",&end);

  if(start%2!=0){
    start++;
  }

  printf("All Even Numbers 1 to N= \n");

  for(i=start;i<=end;i=i+2){

    printf("%d\n",i);

  }
return 0;
}
