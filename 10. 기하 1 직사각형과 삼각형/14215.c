#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max_search(int a, int b, int c)
{
    return a > b ? (a > c ? a : c) : (b > c ? b : c);
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int max = max_search(a, b, c);
    int sum = (a + b + c) - max;
    if (max >= sum)
        max = sum - 1;
    printf("%d\n", max + sum);
    return 0;
}