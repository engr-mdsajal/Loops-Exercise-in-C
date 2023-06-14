/*
Program to find sum of ODD numbers from 1 to n
*/

#include<stdio.h>
int main(){

  int i,n,sum=0;

  printf("Enter Number= ");
  scanf("%d",&n);

  for(i=1;i<=n;i+=2){

     sum += i;
  }
  printf("Sum of Odd Numbers:%d",sum);


return 0;
}
