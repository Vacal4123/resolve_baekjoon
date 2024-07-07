#include <stdio.h>
#include <string.h>

int main()
{
    char Word[101];
    int num = 0;
    scanf("%s", Word);

    for (int i = 0; i < strlen(Word); i++)
    {
        if (Word[i] == 'n' || Word[i] == 'l')
            if (Word[i + 1] == 'j')
            {
                num++;
                i++;
                continue;
            }
        if (Word[i] == 'd')
        {
            if (Word[i + 1] == 'z' && Word[i + 2] == '=')
            {
                num++;
                i += 2;
                continue;
            }
        }
        if (Word[i] == '=' || Word[i] == '-')
            continue;
        num++;
    }
    printf("%d\n", num);
    return 0;
}