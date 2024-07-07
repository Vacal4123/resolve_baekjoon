#include <stdio.h>
#include <string.h>

int main()
{
    char str[5][15];
    memset(str, '\0', (sizeof(char) * 75));
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", str[i]);
        str[i][strlen(str[i])] = '\0';
    }
    for (int i = 0; i < 15; i++)
        for (int s = 0; s < 5; s++)
            if (str[s][i] != '\0')
                printf("%c", str[s][i]);
    printf("\n");
    return 0;
}