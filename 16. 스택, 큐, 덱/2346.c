#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Deque deque;
struct Deque
{
    int seq, num;
    deque *pre, *next;
};

deque *insert_node(deque **data, int num, int seq)
{
    deque *temp = (deque *)malloc(sizeof(deque));
    temp->num = num;
    temp->seq = seq;
    if (*data == NULL)
    {
        temp->pre = temp;
        *data = temp;
    }
    else
    {
        temp->pre = *data;
        (*data)->next = temp;
    }
    return temp;
}

int delete_node(deque **data)
{
    deque *temp = *data;
    int num = temp->num;
    if (num > 0)
    {
        (*data) = temp->next;
        (*data)->pre = temp->pre;
        (temp->pre)->next = (*data);
    }
    else
    {
        (*data) = temp->pre;
        (*data)->next = temp->next;
        (temp->next)->pre = (*data);
    }
    free(temp);
    return num;
}

int main()
{
    int N, num;
    deque *head = NULL, *tail = NULL;

    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &num);
        tail = insert_node(i < 2 ? &head : &tail, num, i);
        tail->next = head;
        head->pre = tail;
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", head->seq);
        num = delete_node(&head);
        for (int i = 1; i < abs(num); i++)
            head = num > 0 ? head->next : head->pre;
    }
}