#include <stdio.h>
#include <stdlib.h>

typedef struct Deque deque;
struct Deque
{
    int num;
    deque *pre, *next;
};

void instert_node(deque **head, deque **tail, int num, int *count, int ch)
{
    deque *temp = (deque *)malloc(sizeof(deque));
    temp->num = num;
    if (*head == NULL && *tail == NULL)
    {
        temp->next = NULL;
        temp->pre = NULL;
        *head = temp;
        *tail = temp;
    }
    else if (ch == 1)
    {
        (*head)->pre = temp;
        temp->pre = NULL;
        temp->next = *head;
        (*head) = temp;
    }
    else
    {
        (*tail)->next = temp;
        temp->pre = *tail;
        temp->next = NULL;
        (*tail) = temp;
    }
    (*count)++;
}

int delete_node(deque **head, deque **tail, int *count, int ch)
{
    int num;
    deque *temp;
    if (*head == NULL && *tail == NULL)
        return -1;
    else if (ch == 3)
    {
        temp = *head;
        num = temp->num;
        *head = (*head)->next;
        if (*head != NULL)
            (*head)->pre = NULL;
        free(temp);
    }
    else
    {
        temp = *tail;
        num = temp->num;
        *tail = (*tail)->pre;
        if (*tail != NULL)
            (*tail)->next = NULL;
        free(temp);
    }
    (*count)--;
    if (*head == NULL || *tail == NULL)
        *head = *tail = NULL;
    return num;
}

int main()
{
    deque *head = NULL, *tail = NULL;
    int N, ch, num, count = 0;
    ;

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        case 2:
            scanf("%d", &num);
            instert_node(&head, &tail, num, &count, ch);
            break;
        case 3:
        case 4:
            printf("%d\n", delete_node(&head, &tail, &count, ch));
            break;
        case 5:
            printf("%d\n", count);
            break;
        case 6:
            printf("%d\n", count == 0 ? 1 : 0);
            break;
        case 7:
        case 8:
            printf("%d\n", count == 0 ? -1 : (ch == 7 ? head->num : tail->num));
            break;
        }
    }
    return 0;
}