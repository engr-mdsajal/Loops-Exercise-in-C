/*
Program to find sum of ODD numbers from 1 to n
*/

#include<stdio.h>
int main(){

  int i,start,end,sum=0;

  printf("Enter Start Number= ");
  scanf("%d",&start);

  printf("Enter End Number= ");
  scanf("%d",&end);

  for(i=start;i<=end;i+=2){

     sum += i;
  }
  printf("Sum of Odd Numbers %d to %d = %d",start,end,sum);


return 0;
}
