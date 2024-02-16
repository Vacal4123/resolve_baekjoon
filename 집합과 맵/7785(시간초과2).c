#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct EMP emp;

struct EMP
{
    char name[6];
    int access;
    emp *next;
};

emp *init(char *name, int access, emp *next)
{
    emp *temp = (emp *)malloc(sizeof(emp));
    strcpy(temp->name, name);
    temp->access = access;
    temp->next = next;
    return temp;
}

emp *search(emp *emps, char *name, int count)
{
    if (count == 0)
        return NULL;
    emp *temp = emps, *pre = temp;
    while (temp != NULL && strcmp(temp->name, name) >= 0)
    {
        if (strcmp(temp->name, name) == 0)
            return temp;
        pre = temp;
        temp = temp->next;
    }
    return pre;
}

int main()
{
    int n, count = 0;
    char name[6], access[6];
    emp *emps = NULL, *temp = NULL;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s", name, access);
        temp = search(emps, name, count);
        if (count == 0 || strcmp(temp->name, name) != 0)
        {
            if (count == 0)
                emps = init(name, strcmp(access, "enter") == 0 ? 1 : 0, NULL);
            else
            {
                if (emps == temp && strcmp(emps->name, name) < 0)
                    emps = init(name, strcmp(access, "enter") == 0 ? 1 : 0, emps);
                else
                    temp->next = init(name, strcmp(access, "enter") == 0 ? 1 : 0, temp->next);
            }
            count++;
        }
        else
            temp->access = strcmp(access, "enter") == 0 ? 1 : 0;
    }
    for (int i = 0; i < count; i++)
    {
        if (emps->access == 1)
            printf("%s\n", emps->name);
        emps = emps->next;
    }
    return 0;
}