#include <stdio.h>

int main()
{
    int Chess[2][6] = {1, 1, 2, 2, 2, 8};
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &Chess[1][i]);
        Chess[0][i] -= Chess[1][i];
    }
    for (int i = 0; i < 6; i++)
        printf("%d ", Chess[0][i]);
    printf("\n");
    return 0;
}