#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    for (; N >= 4; N -= 4)
        printf("long ");
    printf("int\n");
    return 0;
}