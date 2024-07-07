#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        for (int s = 0; s < i; s++)
            printf("*");
        printf("\n");
    }
    return 0;
}