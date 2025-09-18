#include <stdio.h>
#include <stdlib.h>

int Judge_Count(int N0, int M0, int N, int M, char **Chess)
{
    int res = 0;
    char temp;
    for (int i = N0; i < N; i++)
        for (int s = M0; s < M; s++)
        {
            temp = (i + s) % 2 == 0 ? 'B' : 'W';
            if (Chess[i][s] != temp)
                res++;
        }
    return res > 32 ? 64 - res : res;
}

int main()
{
    int N, M, res = 32, temp;
    char **Chess;

    scanf("%d %d", &N, &M);
    Chess = (char **)malloc(sizeof(char *) * N);
    for (int i = 0; i < N; i++)
    {
        Chess[i] = (char *)malloc(sizeof(char) * M);
        scanf("%s", Chess[i]);
    }

    for (int i = 0; i <= N - 8; i++)
        for (int s = 0; s <= M - 8; s++)
        {
            temp = Judge_Count(i, s, i + 8, s + 8, Chess);
            res = res > temp ? temp : res;
        }

    printf("%d\n", res);
    return 0;
}