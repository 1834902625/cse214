#include<stdio.h>
int main()
{
    int *p;
    int i, K;
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int tag = 0;

    scanf("%d",&K);

    p = &array[0];

    for (i=K-1; i<size; i++)
        *(p+i) = *(p+i+1);

    size--;

    for(i=0; i<size; i++)
        printf("%d ", *(p+i));

    return 0;
}
