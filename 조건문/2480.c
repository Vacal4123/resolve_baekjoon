#include <stdio.h>

int main()
{
    int n1, n2, n3, result;

    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1 == n2 && n2 == n3)
    {
        result = 10000 + (n1 * 1000);
    }
    else
    {
        if (n1 == n2 || n1 == n3)
        {
            result = 1000 + (n1 * 100);
        }
        else if (n2 == n3)
        {
            result = 1000 + (n2 * 100);
        }
        else
            result = (n1 >= n2 ? (n1 >= n3 ? n1 : n3) : (n2 >= n3 ? n2 : n3)) * 100;
    }
    printf("%d\n", result);
    return 0;
}