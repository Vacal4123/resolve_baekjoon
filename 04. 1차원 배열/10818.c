#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, n1, n2;
    int *size;

    scanf("%d", &N);
    size = malloc(sizeof(int) * N);

    for (int i = 0; i < N; i++)
        scanf("%d", &size[i]);
    n1 = size[0];
    n2 = size[0];

    for (int i = 0; i < N; i++)
    {
        if (n1 > size[i])
            n1 = size[i];
        if (n2 < size[i])
            n2 = size[i];
    }
    printf("%d %d\n", n1, n2);
    return 0;
}