#include <stdio.h>
#include <stdlib.h>

typedef struct DeQue deque;
struct DeQue
{
    int num;
    deque *next, *pre;
};

deque *push(deque **data, int num, int ch)
{
    deque *temp = (deque *)malloc(sizeof(deque));
    temp->num = num;
    temp->pre = NULL;
    temp->next = NULL;
    if (*data == NULL)
        *data = temp;
    else if (ch == 0)
    {
        (*data)->next = temp;
        temp->pre = *data;
    }
    else
    {
        (*data)->pre = temp;
        temp->next = *data;
    }
    return temp;
}

int pop(deque **data)
{
    deque *temp = *data;
    int num = temp->num;
    if (temp->pre != NULL)
    {
        *data = (*data)->pre;
        (*data)->next = NULL;
    }
    free(temp);
    return num;
}

int main()
{
    int N, *A, M, num, jud = 0;
    ;
    deque *head = NULL, *tail = NULL;

    scanf("%d", &N);
    A = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        if (A[i] == 0)
            jud = 1;
    }
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num);
        if (A[i] == 0)
            tail = push(head == NULL ? &head : &tail, num, 0);
    }

    scanf("%d", &M);
    for (int i = 0; i < M; i++)
    {
        scanf("%d", &num);
        head = push(&head, num, 1);
        printf("%d ", pop(tail != NULL ? &tail : &head));
    }
    return 0;
}