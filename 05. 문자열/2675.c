#include <stdio.h>

int main()
{
    int T, R, i;
    char S[20];

    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        scanf("%d %s", &R, S);
        for (int s = 0; S[s] != NULL; s++)
        {
            for (int k = 0; k < R; k++)
                printf("%c", S[s]);
            S[s] = NULL;
        }
        printf("\n");
    }
    return 0;
}