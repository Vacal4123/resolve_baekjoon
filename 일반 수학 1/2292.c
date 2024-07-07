#include <stdio.h>

int main()
{
    int N, K = 1, i, SIX = 6;
    scanf("%d", &N);
    for (i = 1; K < N; i++)
    {
        K += SIX;
        SIX += 6;
    }
    printf("%d\n", i);
    return 0;
}