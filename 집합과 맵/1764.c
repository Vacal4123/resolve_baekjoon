#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b)
{
    return strcmp(*(char **)a, *(char **)b);
}

int Binary_Search(char **D, int N, char *str)
{
    int low = 0, high = N - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (strcmp(D[mid], str) == 0)
            return mid;
        else if (strcmp(D[mid], str) > 0)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main()
{
    int N, M, temp, count = 0;
    char **D, **searched, str[21];

    scanf("%d %d", &N, &M);
    D = (char **)malloc(sizeof(char *) * N);
    searched = (char **)malloc(sizeof(char *) * N);
    for (int i = 0; i < N; i++)
    {
        D[i] = (char *)malloc(sizeof(char) * 21);
        scanf("%s", D[i]);
    }
    qsort(D, N, sizeof(char *), cmp);

    for (int i = 0; i < M; i++)
    {
        scanf("%s", str);
        temp = Binary_Search(D, N, str);
        if (temp > -1)
        {
            searched[count] = (char *)malloc(sizeof(char) * 21);
            strcpy(searched[count++], D[temp]);
        }
    }
    qsort(searched, count, sizeof(char *), cmp);
    printf("%d\n", count);
    for (int i = 0; i < count; i++)
        printf("%s\n", searched[i]);
    return 0;
}