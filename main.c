#include <stdio.h>
#include <stdlib.h>
int main(void){
int i,array[100],lim,even_no=0;
printf("Enter the size of array ");
scanf("%d",&lim);
for (i=0;i<lim;i++)
{
    scanf("%d",&array[i]);
}
for (i=0;i<lim;i++)
{
    if (array[i]%2==0)
    {
        even_no=even_no+1;
    }
}
printf("Number of even numbers are: %d",even_no);

return 0;
}




