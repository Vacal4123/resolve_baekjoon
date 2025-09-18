#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, q;
    scanf("%d %d", &a, &q);
    int *size = (int *)malloc(sizeof(int) * a);
    for (int i = 0; i < a; i++)
        scanf("%d", &size[i]);
    for (int i = 0; i < a; i++)
        if (size[i] < q)
            printf("%d ", size[i]);
    printf("\n");
    return 0;
}