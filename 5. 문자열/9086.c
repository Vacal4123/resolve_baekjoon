#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int T;
    char **str;
    scanf("%d", &T);
    str = (char **)malloc(sizeof(char *) * T);
    for (int i = 0; i < T; i++)
    {
        str[i] = (char *)malloc(sizeof(char) * 1000);
        scanf("%s", str[i]);
    }
    for (int i = 0; i < T; i++)
        printf("%c%c\n", str[i][0], str[i][strlen(str[i]) - 1]);
    return 0;
}