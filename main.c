#include <stdio.h>

int main(void){
int lim,i,sum=0;
  printf("Enter a number:");
  scanf("%d",&lim);
  for (i=1;i<=lim;i=i+2)
    {
      sum = sum+i;
    }
printf("sum of odd no is =%d",sum);
return 0;
} 

