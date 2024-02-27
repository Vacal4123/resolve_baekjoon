#include <stdio.h>
#include <stdlib.h>

typedef struct List list;
struct List
{
    int num;
    list *pre, *next;
};

list *instance_node(list **data, int num)
{
    list *temp = (list *)malloc(sizeof(list));
    temp->num = num;
    if (*data == NULL)
    {
        temp->next = temp;
        (*data) = temp;
    }
    else
    {
        temp->next = (*data)->next;
        temp->pre = *data;
        (*data)->next = temp;
    }
    return temp;
}

int delete_node(list **data)
{
    list *temp = *data;
    int num = temp->num;
    (temp->next)->pre = temp->pre;
    (temp->pre)->next = temp->next;
    (*data) = temp->next;
    free(temp);
    return num;
}

int main()
{
    int N, K;
    list *head = NULL, *tail = NULL;

    scanf("%d %d", &N, &K);
    for (int i = 1; i <= N; i++)
    {
        tail = instance_node(i < 3 ? &head : &tail, i);
        head->pre = tail;
    }
    printf("<");
    for (int i = 1; i <= N; i++)
    {
        for (int i = 1; i < K; i++)
            head = head->next;
        printf("%d%s", delete_node(&head), head->next == head ? "" : ", ");
    }
    printf(">\n");
    return 0;
}