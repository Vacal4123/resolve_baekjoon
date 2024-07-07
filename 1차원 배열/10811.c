#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void Reverse(int *Box, int i, int j)
{
    int temp;
    for (int s = 0; s < round(((double)j - i) / 2); s++)
    {
        temp = Box[i + s];
        Box[i + s] = Box[j - s];
        Box[j - s] = temp;
    }
}

int main()
{
    int N, M, *Box, i, j;
    scanf("%d %d", &N, &M);
    Box = (int *)malloc(sizeof(int) * (N + 1));
    for (int s = 1; s <= N; s++)
        Box[s] = s;
    for (int s = 0; s < M; s++)
    {
        scanf("%d %d", &i, &j);
        Reverse(Box, i, j);
    }
    for (int s = 1; s <= N; s++)
    {
        printf("%d", Box[s]);
        if (s != N)
            printf(" ");
    }
    printf("\n");
    return 0;
}