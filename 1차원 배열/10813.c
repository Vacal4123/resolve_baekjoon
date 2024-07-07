#include <stdio.h>
#include <stdlib.h>

void Change(int *Box, int i, int j)
{
    int temp = Box[i];
    Box[i] = Box[j];
    Box[j] = temp;
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
        Change(Box, i, j);
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