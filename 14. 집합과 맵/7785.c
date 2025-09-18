#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[6];
    int access, i;
} emp;

int cmp(const void *a, const void *b)
{
    char *s1 = ((emp *)a)->name;
    char *s2 = ((emp *)b)->name;
    int temp = strcmp(s2, s1);
    if (temp != 0)
        return temp;
    else
        return ((emp *)a)->i - ((emp *)b)->i;
}

int main()
{
    int n;
    char access[6];
    emp *emps;

    scanf("%d", &n);
    emps = (emp *)malloc(sizeof(emp) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s", emps[i].name, access);
        emps[i].access = strcmp(access, "enter") == 0 ? 1 : 0;
        emps[i].i = i;
    }
    qsort(emps, n, sizeof(emp), cmp);
    for (int i = 0; i < n; i++)
    {
        if (n - i > 2 && strcmp(emps[i].name, emps[i + 2].name) == 0)
            i++;
        else if (n - i > 1 && strcmp(emps[i].name, emps[i + 1].name) == 0)
            continue;
        else if (emps[i].access == 1)
            printf("%s\n", emps[i].name);
    }
    return 0;
}