#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b)
{
    return strcmp(*(char **)a, *(char **)b);
}

int overlap_count(char **names, int S, int L)
{
    int res = 0;
    for (int i = S; i <= L; i++)
        if (strcmp(names[i - 1], names[i]) != 0)
            res++;
    return res;
}

int main()
{
    int N, res = 0, start = 1;
    char **names;
    scanf("%d", &N);
    names = (char **)malloc(sizeof(char *) * N);
    for (int i = 0; i < N; i++)
    {
        names[i] = (char *)malloc(sizeof(char) * 21);
        scanf("%s", names[i]);
        if (strcmp(names[i], "ENTER") == 0 && i != 0)
        {
            qsort(&names[start], i - start, sizeof(char *), cmp);
            res += overlap_count(names, start, i - 1);
            start = i + 1;
        }
    }
    qsort(&names[start], N - start, sizeof(char *), cmp);
    res += overlap_count(names, start, N - 1);
    printf("%d\n", res);
    return 0;
}