#include <stdio.h>

int main(void){
  int i,num,multi;
printf("Enter number: ");
scanf("%d",&num);
for(i=1;i<=10;i++)
  {
    multi = num*i;
    printf("%d X%d = %d\n",i,num,multi);
  }
return 0;
}