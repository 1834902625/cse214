#include<stdio.h>
int main()
{
    int i,j;
    int ara[100]={10,20,30,40,50,60,70,80,90,100};
    for(i=0;i<10;i++){
        if(i==9)
            printf("%d",ara[i]);
        else
            printf("%d,",ara[i]);

    }

return 0;
}
