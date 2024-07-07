#include <stdio.h>

int main()
{
    int T, n1, n2;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &n1, &n2);
        printf("%d\n", n1 + n2);
    }
    return 0;
}