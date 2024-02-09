#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char str[51];
    int len;
} Str;

int cmp(const void *a, const void *b)
{
    Str t1 = *(Str *)a, t2 = *(Str *)b;
    if(t1.len != t2.len)
        return t1.len - t2.len;
    else
        return strcmp(t1.str, t2.str);
}

int main()
{
    int N;
    Str *Words;
    scanf("%d", &N);
    Words = (Str *)malloc(sizeof(Str) * N);

    for (int i = 0; i < N; i++)
    {
        scanf("%s", Words[i].str);
        Words[i].len = strlen(Words[i].str);
    }
    qsort(Words, N, sizeof(Str), cmp);

    for (int i = 0; i < N; i++) {
        if( i == 0 || (i > 0 && strcmp(Words[i].str, Words[i-1].str) != 0))
            printf("%s\n", Words[i].str);
    }
    return 0;
}