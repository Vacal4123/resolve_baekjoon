#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    scanf("%d", &c);
    b += c;
    while (b >= 60)
    {
        a++;
        b -= 60;
        if (a == 24)
            a = 0;
    }
    printf("%d %d\n", a, b);
}