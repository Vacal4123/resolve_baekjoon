#include <stdio.h>

int main()
{
    int a[9];
    int max_N = 0;

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &a[i]);
        if (a[max_N] < a[i])
            max_N = i;
    }
    printf("%d\n%d\n", a[max_N], max_N + 1);
    return 0;
}