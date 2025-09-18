#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Que que;
struct Que
{
    int num;
    que *next;
};

que *en_que(que **q, int num, int *count)
{
    que *temp = (que *)malloc(sizeof(que));
    temp->num = num;
    temp->next = NULL;
    (*count)++;
    if (*q == NULL)
        *q = temp;
    else
        (*q)->next = temp;
    return temp;
}

int de_que(que **q, int *count)
{
    if (*q == NULL)
        return -1;
    que *temp = *q;
    int num = temp->num;
    *q = (*q)->next;
    free(temp);
    (*count)--;
    return num;
}

int main()
{
    int N, count = 0, num;
    char ch[6];
    que *data = NULL, *tail = NULL;

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%s", ch);
        if (strcmp(ch, "push") == 0)
        {
            scanf("%d", &num);
            tail = en_que(count < 2 ? &data : &tail, num, &count);
        }
        else if (strcmp(ch, "pop") == 0)
            printf("%d\n", de_que(&data, &count));
        else if (strcmp(ch, "size") == 0)
            printf("%d\n", count);
        else if (strcmp(ch, "empty") == 0)
            printf("%d\n", count == 0 ? 1 : 0);
        else if (strcmp(ch, "front") == 0)
            printf("%d\n", data == NULL ? -1 : data->num);
        else if (strcmp(ch, "back") == 0)
            printf("%d\n", data == NULL ? -1 : tail->num);
    }
    return 0;
}