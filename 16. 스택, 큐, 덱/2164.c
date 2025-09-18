#include <stdio.h>
#include <stdlib.h>

typedef struct List list;
struct List
{
    int num;
    list *ptr;
};

list *insert_node(list **data, int num)
{
    list *temp = (list *)malloc(sizeof(list));
    temp->num = num;
    temp->ptr = NULL;
    if (*data == NULL)
        *data = temp;
    else
        (*data)->ptr = temp;
    return temp;
}

int delete_node(list **data)
{
    list *temp = *data;
    int num = temp->num;
    *data = (*data)->ptr;
    free(temp);
    return num;
}

int main()
{
    int N, temp;
    list *head = NULL, *tail = NULL;

    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
        tail = insert_node(i < 3 ? &head : &tail, i);
    while (N != 1)
    {
        delete_node(&head);
        if (head->ptr == NULL)
            break;
        temp = delete_node(&head);
        tail = insert_node(&tail, temp);
    }
    printf("%d\n", head->num);
    return 0;
}