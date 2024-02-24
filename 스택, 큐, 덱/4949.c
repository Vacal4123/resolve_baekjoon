#include <stdio.h>
#include <stdlib.h>

typedef struct Stack stack;
struct Stack
{
    char ch;
    stack *next;
};

void push(stack **stk, char ch)
{
    stack *temp = (stack *)malloc(sizeof(stack));
    temp->ch = ch;
    temp->next = *stk;
    *stk = temp;
}

char pop(stack **stk)
{
    if (*stk == NULL)
        return -1;
    else
    {
        stack *temp = *stk;
        char ch = temp->ch;
        *stk = (*stk)->next;
        free(temp);
        return ch;
    }
}

int main()
{
    stack *stk = NULL;
    int i;
    char ch;
    for (i = 0;; i++)
    {
        ch = getchar();
        if (ch == '.')
        {
            if (i == 0)
                break;
            else if (stk == NULL)
                printf("yes\n");
            else
            {
                printf("no\n");
                while (stk != NULL)
                    pop(&stk);
            }
            i = -1;
            getchar();
        }
        else if (ch == '(' || ch == '[')
            push(&stk, ch);
        else if (ch == ')' || ch == ']')
        {
            char temp = pop(&stk);
            if (!((temp == '(' && ch == ')') || (temp == '[' && ch == ']')))
                push(&stk, ch);
        }
    }
    return 0;
}