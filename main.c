#include <stdio.h>

int main(void)
{
int lim,i,j,temp,value[100];
printf("Enter a limit for values:");
scanf("%d",&lim);
printf("Enter the values:");
for(i=0;i<lim;i++)
    {
    scanf("%d",&value[i]);
    }
for(i=0;i<lim;i++)
{
    for(j=i+1;j<lim;j++)
    {
        if(value[i]>value[j])
        {
        temp=value[i];
        value[i]=value[j];
        value[j]=temp;
        }
    }
}
printf("Sorted values are:");
for(i=0;i<lim;i++)
    {
        printf("%d\n",value[i]);
    }
return 0;
}




