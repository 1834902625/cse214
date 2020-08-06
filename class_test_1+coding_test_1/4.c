#include <stdio.h>
int main()
{
    int arr[50] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11,12};
    int i, K, size=12;

    scanf("%d", &K);

    for (i=K-1;i<size;i++){
        arr[i]=arr[i+1];
    }

    size--;

    for (i=0; i<size; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
