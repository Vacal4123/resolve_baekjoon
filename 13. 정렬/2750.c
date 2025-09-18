#include <stdio.h>
#include <stdlib.h>
#define SWAP(X, Y, temp) ((temp) = (X), (X) = (Y), (Y) = (temp))

int Partition(int *arr, int left, int right)
{
    int temp, pivot = arr[left];
    int low = left + 1, high = right;
    while (low <= high)
    {
        while (arr[low] < pivot)
            low++;
        while (arr[high] > pivot)
            high--;
        if (low <= high)
            SWAP(arr[low], arr[high], temp);
    }
    SWAP(arr[left], arr[high], temp);
    return high;
}

void Quick_Sort(int *arr, int left, int right)
{
    if (left < right)
    {
        int pivot = Partition(arr, left, right);
        Quick_Sort(arr, left, pivot - 1);
        Quick_Sort(arr, pivot + 1, right);
    }
}

int main()
{
    int N, *arr;
    scanf("%d", &N);

    arr = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    Quick_Sort(arr, 0, N - 1);
    for (int i = 0; i < N; i++)
        printf("%d\n", arr[i]);
    return 0;
}