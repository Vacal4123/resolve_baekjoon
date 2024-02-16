#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char name[6];
    int access;
} emp;

int cmp(const void *a, const void *b)
{
    char *s1 = ((emp *)a)->name;
    char *s2 = ((emp *)b)->name;
    //printf("%s %s %d\n\n", a, b, strcmp(s1, s2));
    return !strcmp(s1, s2);
}

int Binary_Search(emp *emps, int n, char *name)
{
    int low = 0, high = n - 1, mid;
    if (n == 0)
        return -1;
    else
    {
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (strcmp(emps[mid].name, name) == 0)
                return mid;
            else if (strcmp(emps[mid].name, name) < 0)
                high = mid - 1;
            else
                low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n, count = 0, temp;
    char name[6], access[6];
    emp *emps;

    scanf("%d", &n);
    emps = (emp *)malloc(sizeof(emp) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s", name, access);
        if((temp = Binary_Search(emps, count, name)) == -1) {
            strcpy(emps[count].name, name);
            emps[count].access = strcmp(access, "enter") == 0 ? 1 : 0;
            qsort(emps, count++, sizeof(emp), cmp);
            /*
            printf("\n\n");
            for (int i = 0; i < count; i++)
                printf("%s\n", emps[i].name);
                */
        }
        else
            emps[temp].access = strcmp(access, "enter") == 0 ? 1 : 0;
    }
    for (int i = 0; i < count; i++)
        if(emps[i].access == 1)
            printf("%s\n", emps[i].name);
    return 0;
}