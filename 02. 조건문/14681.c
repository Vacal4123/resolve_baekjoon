#include <stdio.h>

int main()
{
    int x, y, result;
    scanf("%d %d", &x, &y);
    if (x < 0 && y < 0)
        result = 3;
    else if (x > 0 && y < 0)
        result = 4;
    else if (x > 0 && y > 0)
        result = 1;
    else
        result = 2;
    printf("%d\n", result);
    return 0;
}