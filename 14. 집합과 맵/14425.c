#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b)
{
    char **s1 = (char **)a;
    char **s2 = (char **)b;
    return strcmp(*s1, *s2);
}

int Bin_Search(char **S, int N, char *str)
{
    int low = 0, high = N - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (strcmp(S[mid], str) == 0)
            return 1;
        else if (strcmp(S[mid], str) > 0)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return 0;
}

int main()
{
    int N, M, res = 0;
    char **S, **arr;

    scanf("%d %d", &N, &M);
    S = (char **)malloc(sizeof(char *) * N);
    arr = (char **)malloc(sizeof(char *) * M);
    for (int i = 0; i < N; i++)
    {
        S[i] = (char *)malloc(sizeof(char) * 501);
        scanf("%s", S[i]);
    }
    qsort(S, N, sizeof(char **), cmp);
    for (int i = 0; i < M; i++)
    {
        arr[i] = (char *)malloc(sizeof(char) * 501);
        scanf("%s", arr[i]);
    }

    for (int i = 0; i < M; i++)
        res += Bin_Search(S, N, arr[i]);
    printf("%d\n", res);

    return 0;
}