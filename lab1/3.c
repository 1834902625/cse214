#include<stdio.h>
int main()
{
    int i,j,n;
    i=0;
    int ara[100];
    while(scanf("%d",&ara[i]) && ara[i] != 0){
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
