/* C program to print all natural numbers in range
*/

#include<stdio.h>
int main(){


  int i, start,end;
  printf("Enter Your End Range =");
  scanf("%d",&end);
  printf("Enter Your Start Range =");
  scanf("%d",&start);
  for(i=start;i<=end;i++){

    printf("%d\n",i);
  }

return 0;
}
