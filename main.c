#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
int main(){
    int h,m,s,gap;
    gap = 1000;
    printf("Enter your time :\n");
    scanf("%d%d%d",&h,&m,&s);
    if(h>12|| m>60|| s>60){
        printf("error \n");
        exit(0);
    }
    while (1)
    {
        s++;
        if(s==60){
            m++;
            s=0;
        }
        if(m==60){
            h++;
            m=0;
        }
        if(h>12){
            h=1;
        }
        printf("\n clock: \n");
        printf("\n %02d:%02d:%02d",h,m,s);
        Sleep(gap);
        system("cls");

    }
    
}
