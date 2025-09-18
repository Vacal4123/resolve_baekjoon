#include <stdio.h>
#include <stdlib.h>

typedef struct stack Stack;
struct stack
{
    int num;
    Stack *next;
};

Stack *init(int num, Stack *next)
{
    Stack *temp = (Stack *)malloc(sizeof(Stack));
    temp->num = num;
    temp->next = next;
    return temp;
}

void push(Stack **stk, int *count)
{
    int num;
    scanf("%d", &num);
    *stk = init(num, *stk);
    (*count)++;
}

int pop(Stack **stk, int *count)
{
    if (*stk == NULL)
        return -1;
    else
    {
        int num = (*stk)->num;
        Stack *temp = *stk;
        *stk = (*stk)->next;
        free(temp);
        (*count)--;
        return num;
    }
}

int main()
{
    Stack *stk = NULL;
    int N, ch, count = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push(&stk, &count);
            break;
        case 2:
            printf("%d\n", pop(&stk, &count));
            break;
        case 3:
            printf("%d\n", count);
            break;
        case 4:
            printf("%d\n", count == 0 ? 1 : 0);
            break;
        case 5:
            printf("%d\n", stk != NULL ? stk->num : -1);
        }
    }
    return 0;
}