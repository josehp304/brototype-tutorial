#include <stdio.h>
int main(void){
  int a = 1,b=2;
  a=b+a;
  b=a-b;
  a=a-b;
  printf("New values are: a=%d,b=%d,",a,b);
return 0;
}
  