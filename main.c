#include <stdio.h>
#include <stdlib.h>
int main(void){
    int lim,array1[100][100],array2[100][100],array_sum[100][100],i,j;


    printf("enter the size of the array:\n");
    scanf("%d",&lim);
    printf("enter the values of first array:\n ");
    for(i=0;i<lim;i++){
        for(j=0;j<lim;j++){
            scanf("%d",&array1[i][j]);
        }
    }
    printf("enter the values of second array: \n");
    for(i=0;i<lim;i++){
        for(j=0;j<lim;j++){
            scanf("%d",&array2[i][j]);
        }
    }


    for(i=0;i<lim;i++){
        for(j=0;j<lim;j++){
            array_sum[i][j] = array1[i][j]+array2[i][j];
        }
    }

    printf("The sum of arrays is:\n");
    for(i=0;i<lim;i++){
        for(j=0;j<lim;j++){
            printf("%d \n",array_sum[i][j]);
        }
    }
    return 0;
}