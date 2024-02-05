#include <stdio.h>

int main()
{
    int a[2], c, n;
    scanf("%d %d %d %d", &a[1], &a[0], &c, &n);

    if (a[1] <= c && (a[1] * n) + a[0] <= c * n)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}