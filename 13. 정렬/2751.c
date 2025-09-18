#include <stdio.h>
#include <stdlib.h>

void merge(int *arr, int left, int right)
{
    int l = left, m = (left + right) / 2;
    int r = m + 1, Count = 0;
    int *sorted = (int *)malloc(sizeof(int) * ((right - left) + 1));

    while (l <= m && r <= right)
    {
        if (arr[l] <= arr[r])
            sorted[Count++] = arr[l++];
        else
            sorted[Count++] = arr[r++];
    }
    while (l <= m)
        sorted[Count++] = arr[l++];
    while (r <= right)
        sorted[Count++] = arr[r++];

    Count = 0;
    for (int i = left; i <= right; i++)
        arr[i] = sorted[Count++];
    free(sorted);
}

void merge_sort(int *arr, int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);
        merge(arr, left, right);
    }
}

int main()
{
    int N, *arr;
    scanf("%d", &N);

    arr = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    merge_sort(arr, 0, N - 1);

    for (int i = 0; i < N; i++)
        printf("%d\n", arr[i]);
    return 0;
}