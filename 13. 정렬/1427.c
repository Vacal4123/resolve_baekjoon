#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cmp(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}

int main()
{
    int N, i, *arr;
    scanf("%d", &N);
    for (i = 1; N >= pow(10, i);)
        i++;

    arr = (int *)malloc(sizeof(int) * i);
    for (int s = 0; s < i; s++)
    {
        arr[s] = N % 10;
        N /= 10;
    }

    qsort(arr, i, sizeof(int), cmp);
    for (int s = 0; s < i; s++)
        printf("%d", arr[s]);
    puts("");
    return 0;
}