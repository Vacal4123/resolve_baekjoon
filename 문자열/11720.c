#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, sum = 0, avg = '0' - 0;
    char *b;

    scanf("%d", &a);
    b = malloc(sizeof(char) * a);

    scanf("%s", b);
    for (int i = 0; i < a; i++)
        sum += (b[i] - avg);
    printf("%d\n", sum);
    return 0;
}