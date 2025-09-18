#include <stdio.h>
#include <string.h>

int Palind_Judge(char *str)
{
    int len = (int)strlen(str);
    for (int i = 0; i < len / 2; i++)
        if (str[i] != str[(len - 1) - i])
            return 0;
    return 1;
}

int main()
{
    char str[101];
    scanf("%s", str);
    printf("%d\n", Palind_Judge(str));
    return 0;
}