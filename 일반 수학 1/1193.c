#include <stdio.h>

int main()
{
    int a, i = 0;
    scanf("%d", &a);

    while (a > 0)
    {
        i++;
        a -= i;
    }

    if (i % 2 == 0)
    {
        printf("%d/%d", i + a, 1 + (-a));
    }
    else
    {
        printf("%d/%d", 1 + (-a), i + a);
    }

    return 0;
}
