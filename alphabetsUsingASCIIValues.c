/*
Program to display alphabets using ASCII values
*/

#include<stdio.h>
int main(){

  int asciiValue;
  printf("Alphabets From a to z= \n");
  for(asciiValue=97;asciiValue<=122;asciiValue++){

    printf("%c\n",asciiValue);
  }

return 0;
}
