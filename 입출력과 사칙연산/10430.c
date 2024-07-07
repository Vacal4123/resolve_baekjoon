#include <stdio.h>

int main()
{
    int a, b, c;
    int n1, n2;
    scanf("%d %d %d", &a, &b, &c);
    n1 = a % c;
    n2 = b % c;
    printf("%d\n%d\n", (a + b) % c, (n1 + n2) % c);
    printf("%d\n%d\n", (a * b) % c, (n1 * n2) % c);
    return 0;
}