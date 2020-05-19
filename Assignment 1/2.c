#include<stdio.h>
int main()
{
    int i,n,j;
    int ara[100];

    i=0;
    while(scanf("%d",&ara[i]) != EOF){
        i++;
    }
    if(i>100){
        printf("Array Overflow\n");
    }
    for(j=0;j<i;j++){
        printf("%d ",ara[j]);
    }
return 0;
}
