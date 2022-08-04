#include <stdio.h>
#include <stdlib.h>
int main(void){
int array1[100],array2[100],temp[100],i,j,lim;
//Collecting array limit and array values
printf("Enter the size of the array:");
scanf("%d",&lim);
printf("Enter the values of array 1\n");
for (i=0;i<lim;i++)
    {
        scanf("%d",&array1[i]);
    }
printf("Enter the values of array 2\n");
for (i=0;i<lim;i++)
    {
        scanf("%d",&array2[i]);    
    }
//Transfering values from array 1 to 2
for(i=0;i<lim;i++)
    {
        temp[i]=array1[i];
        array1[i]=array2[i];
        array2[i]=temp[i];
    }
//printing result
printf("Values of array1: ");
for(i=0;i<lim;i++)
    {
        printf("%d,",array1[i]);
    }
printf("\n");
printf("Values of array 2: ");
for (i=0;i<lim;i++)
    {
        printf("%d,",array2[i]);
    }



return 0;
}




