#include <stdio.h>

int factorial(int N)
{
    int res = 1;
    for (int i = 2; i <= N; i++)
        res *= i;
    return res;
}

int main()
{
    int N, res;
    scanf("%d", &N);

    res = factorial(N);
    printf("%d\n", res);
    return 0;
}