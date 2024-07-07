#include <stdio.h>
#include <stdlib.h>

typedef struct Que que;
struct Que
{
    int num;
    que *next;
};

typedef struct Stk stk;
struct Stk
{
    int num;
    stk *next;
};

que *en_que(que **q, int num)
{
    que *temp = (que *)malloc(sizeof(que));
    temp->num = num;
    temp->next = NULL;
    if (*q == NULL)
        *q = temp;
    else
        (*q)->next = temp;
    return temp;
}

int de_que(que **q)
{
    que *temp = *q;
    int num = temp->num;
    *q = (*q)->next;
    free(temp);
    return num;
}

void push(stk **s, int num)
{
    stk *temp = (stk *)malloc(sizeof(stk));
    temp->num = num;
    temp->next = *s;
    *s = temp;
}

void pop(stk **s)
{
    stk *temp = *s;
    *s = (*s)->next;
    free(temp);
}

int main()
{
    int N, num, count;
    que *que_line = NULL, *que_tail = NULL;
    stk *stk_line = NULL;

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num);
        que_tail = en_que(i < 2 ? &que_line : &que_tail, num);
    }
    for (count = 1; count <= N;)
    {
        if (que_line != NULL && que_line->num == count)
        {
            de_que(&que_line);
            count++;
        }
        else if (stk_line != NULL && stk_line->num == count)
        {
            pop(&stk_line);
            count++;
        }
        else
        {
            if (que_line == NULL)
                break;
            else
                push(&stk_line, de_que(&que_line));
        }
    }
    if (count == N + 1)
        printf("Nice\n");
    else
        printf("Sad\n");
    return 0;
}