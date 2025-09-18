#include <stdio.h>

int main()
{
    int n;
    long int res = 0;

    scanf("%d", &n);
    for (int i = 1; i < n; i++)
        for (int s = i; s < n; s++)
            res++;

    printf("%ld\n2\n", res);
    return 0;
}