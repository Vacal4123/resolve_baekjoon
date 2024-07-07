#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int N, M, i, j, k, *Box;
    scanf("%d %d", &N, &M);
    Box = (int *)malloc(sizeof(int) * N);
    memset(Box, 0, sizeof(int) * N);
    for (int s = 0; s < M; s++)
    {
        scanf("%d %d %d", &i, &j, &k);
        i--;
        j--;
        for (int d = 0; d <= (j - i); d++)
            Box[i + d] = k;
    }
    for (int s = 0; s < N; s++)
    {
        printf("%d", Box[s]);
        if (s != N - 1)
            printf(" ");
    }
    printf("\n");
    return 0;
}