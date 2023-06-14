/**
 * C program to find Sum Of Natural Numbers in given range
 */

 #include<stdio.h>
 int main(){

   int start,end,i,sum=0;

   printf("Enter Start Number=");
   scanf("%d",&start);

   printf("Enter End Number=");
   scanf("%d",&end);

   for(i=start;i<=end;i++){

    sum=sum+i;


   }
   printf("Sum of %d to %d=%d",start,end,sum);




 return 0;
 }
