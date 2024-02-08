#include <stdio.h>
#include <stdlib.h>
#define SWAP(x, y, temp) ((temp) = (x), (x) = (y), (y) = (temp))

int Partition(int *N, int left, int right)
{
    int pivot = N[left], temp;
    int low = left, high = right + 1;
    do
    {
        do
            low++;
        while (low <= high && N[low] < pivot);
        do
            high--;
        while (high >= low && N[high] > pivot);

        if (low < high)
            SWAP(N[low], N[high], temp);
    } while (low < high);
    SWAP(N[left], N[high], temp);
    return high;
}

void Quick_Sort(int *N, int left, int right)
{
    int pivot;
    if (left < right)
    {
        pivot = Partition(N, left, right);
        Quick_Sort(N, left, pivot - 1);
        Quick_Sort(N, pivot + 1, right);
    }
}

int main()
{
    int N, k, *x;
    scanf("%d %d", &N, &k);

    x = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
        scanf("%d", &x[i]);
    Quick_Sort(x, 0, N - 1);

    printf("%d\n", x[N - k]);
    return 0;
}