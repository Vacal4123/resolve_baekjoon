#include <stdio.h>

int main()
{
    int a[10], N = 0, C = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        a[i] %= 42;
        for (int s = 0; s < i; s++)
            if (a[s] == a[i])
            {
                C = 1;
                break;
            }
        if (C == 0)
        {
            N += 1;
        }
        C = 0;
    }

    printf("%d\n", N);
    return 0;
}