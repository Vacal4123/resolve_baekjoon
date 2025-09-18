#include <stdio.h>
#define gob(a, b) (a * b)

int main(void)
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i < 10; i++)
        printf("%d * %d = %d\n", a, i, gob(a, i));
    return 0;
}