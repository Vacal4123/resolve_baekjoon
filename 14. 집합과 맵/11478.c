#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *sorted[500500];

int cmp(const void *a, const void *b)
{
    return strcmp(*(char **)a, *(char **)b);
}

int main()
{
    int count = 0, res = 0;
    char str[1001];

    scanf("%s", str);
    for (int i = 0; i < (int)strlen(str); i++)
        for (int s = i; s < (int)strlen(str); s++)
        {
            sorted[count] = (char *)malloc(sizeof(char) * ((s - i) + 2));
            strncpy(sorted[count], (str + i), (s - i) + 1);
            sorted[count++][(s - i) + 1] = '\0';
        }
    qsort(sorted, count, sizeof(char *), cmp);

    for (int i = 0; i < count; i++)
    {
        if ((count - i) > 2 && strcmp(sorted[i], sorted[i + 2]) == 0)
            i++;
        else if ((count - i) > 1 && strcmp(sorted[i], sorted[i + 1]) == 0)
            continue;
        else
            res++;
    }
    printf("%d\n", res);

    return 0;
}