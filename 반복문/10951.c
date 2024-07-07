#include <stdio.h>

int sum(int n1, int n2)
{
    return n1 + n2;
}

int main()
{
    int n1, n2;
    while (scanf("%d %d", &n1, &n2) != EOF)
    {
        printf("%d\n", sum(n1, n2));
    }
    return 0;
}