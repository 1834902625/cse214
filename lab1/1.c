#include<stdio.h>
int main()
{
    int n,i,j;
    int ara[100];
    scanf("%d",&n);
    i=0;
    while(scanf("%d",&ara[i])==1){
        i++;
        if(i>n){
            printf("Array Overflow\n");
            break;
        }
    }
    for(j=0;j<i;j++){
        printf("%d ",ara[j]);

    }
return 0;
}
