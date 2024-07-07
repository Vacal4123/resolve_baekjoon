#include <stdio.h>

int main()
{
    int i;
    char str[1000];
    scanf("%s", str);
    scanf("%d", &i);
    printf("%c\n", str[i - 1]);
    return 0;
}