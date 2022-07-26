#include <stdio.h>

int main(void){
  int choice;
  printf("1)RTX 3090ti\n2)Intel i9 900k\n3)Rysen 5 5000\n4)PS5\nSelect a order from the above :");
scanf("%d",&choice);
 switch(choice){
   case 1:
    printf("Your RTX 3090 will be coming soon");
    break;
   case 2:
   printf("Your INTEL i9 900k will be coming soon");
   break;
   case 3:
   printf("Your Rysen 5 5000 will be coming soon");
   break; 
   case 4:
   printf("Your PS5 will be coming soon");
   break;
   default:
   printf("incorrect input");
   
  }
return 0;
}