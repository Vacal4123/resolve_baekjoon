#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int Binary_search(int *arr, int N, int num)
{
    int low = 0, high = N - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == num)
            return 1;
        else if (arr[mid] < num)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return 0;
}

int main()
{
    int N, M, *arr1, *arr2;

    scanf("%d", &N);
    arr1 = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
        scanf("%d", &arr1[i]);
    qsort(arr1, N, sizeof(int), cmp);

    scanf("%d", &M);
    arr2 = (int *)malloc(sizeof(int) * M);
    for (int i = 0; i < M; i++)
        scanf("%d", &arr2[i]);

    for (int i = 0; i < M; i++)
        printf("%d ", Binary_search(arr1, N, arr2[i]));
    puts("");
    return 0;
}