
#include <stdio.h>
int main()
{
    char str[20];
    int i,j,k=0;

    printf("Enter a name plz:");
    scanf("%s",str);
    for (i=0;str[i]!='\0';i++);  

    for (j=0;j<=(i/2);j++){
        if (str[j]!=str[i-(1+j)]){
            k=k+1;
            break;
    }
    }

    if (k==0){
        printf("The word is palidrome\n");

    }
    else{
        printf("the word is not a palodrome %d",k);
        }
return 0;
}




