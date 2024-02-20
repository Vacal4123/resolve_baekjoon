#include <stdio.h>
#include <stdlib.h>

int find_GCD(int a, int b)
{
    int r = a % b;
    if (r == 0)
        return b;
    return find_GCD(b, r);
}

int main()
{
    int N, *arr, *interver;

    scanf("%d", &N);
    arr = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    int count = 0;
    interver = (int *)calloc(N - 1, sizeof(int));
    for (int i = 0; i < N - 1; i++)
        interver[count++] = arr[i + 1] - arr[i];

    int GCD = interver[0];
    for (int i = 0; i < count - 1; i++)
    {
        int temp = find_GCD(GCD, interver[i + 1]);
        if (GCD > temp)
            GCD = temp;
    }

    printf("%d\n", ((arr[N - 1] - arr[0]) / GCD) - (N - 1));
    return 0;
}