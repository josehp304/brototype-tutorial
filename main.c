#include <stdio.h>

int main(void){
  int num,num2,op,sum,sub,div,multi;
  printf("Enter two numbers :");
  scanf("%d""%d",&num,&num2);
  printf("1)+\n2)-\n3)/\n4)*\nEnter the opertaion you want to execute:");
  scanf("%d",&op);
if(op == 1)
{
  sum = num +num2;
  printf("Your answer is %d",sum);
}
  else if (op == 2)
  {
    sub = num-num2;
    printf("Your answer is %d",sub);
  }
  else if (op == 3)
  {
    div = num/num2;
    printf("Your answer is %d",div);
  }else if (op == 4)
  {
    multi = num *num2;
    printf("Your answer is %d",multi);
  }
}