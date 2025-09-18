#include <stdio.h>

int main()
{
    char num1[4], num2[4];
    int n1 = 0, n2 = 0, i, T = 100;

    scanf("%s %s", num1, num2);
    for (i = 2; i >= 0; i--)
    {
        n1 += ((num1[i] - '0') * T);
        T /= 10;
    }
    T = 100;
    for (i = 2; i >= 0; i--)
    {
        n2 += ((num2[i] - '0') * T);
        T /= 10;
    }
    printf("%d\n", (n1 > n2) ? n1 : n2);
    return 0;
}