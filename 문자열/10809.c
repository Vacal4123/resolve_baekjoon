#include <stdio.h>

int Judge[26];

int main()
{
    int Num = 'a', i;
    char Word[100];
    scanf("%s", Word);

    for (i = 0; i < 26; i++)
        Judge[i] = -1;

    for (i = 0; Word[i] != NULL; i++)
        if (Judge[Word[i] - Num] == -1)
            Judge[Word[i] - Num] = i;

    for (i = 0; i < 26; i++)
        printf("%d ", Judge[i]);

    printf("\n");
    return 0;
}