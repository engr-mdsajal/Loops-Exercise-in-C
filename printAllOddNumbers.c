/*
C program to print all Odd numbers from 1 to n
*/

#include<stdio.h>
int main(){

  int number,i;

  printf("Enter Number= ");
  scanf("%d",&number);
  printf("All Odd Numbers 1 to N= ");
  for(i=1;i<=number;i++){
    if(i%2!=0){
    printf("[%d ]",i);
  }
  }
return 0;
}
