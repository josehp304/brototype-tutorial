#include <stdio.h>

int main(void){
int flag=0,num,i;
printf("Enter a number ");
scanf("%d",&num);
for (i=2;i<num;i++)
{
if(num%i==0)
{
  flag=flag+1;
  break;
}
}
if(flag==0)
{
  printf("prime");
}else{
  printf("composite");
}
return 0;
} 