/*
C program to print all even numbers from 1 to n
*/

#include<stdio.h>
int main(){

  int number,i;

  printf("Enter Number= \n");
  scanf("%d",&number);
  printf("All Even Numbers 1 to N= \n");
  for(i=1;i<=number;i++){
    if(i%2==0){
    printf("%d\n",i);
  }
  }
return 0;
}
