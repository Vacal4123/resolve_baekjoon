#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, *arr, v, Count = 0;
    scanf("%d", &N);
    arr = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &v);
    for (int i = 0; i < N; i++)
        if (arr[i] == v)
            Count++;
    printf("%d\n", Count);
    return 0;
}