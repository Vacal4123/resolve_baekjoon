#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Stack stack;
struct Stack
{
    char ch;
    stack *next;
};

void pop(stack **stk)
{
    if (*stk == NULL)
    {
        return;
    }
    else
    {
        stack *temp = *stk;
        *stk = (*stk)->next;
        free(temp);
    }
}

void push(stack **stk, char ch)
{
    stack *temp = (stack *)malloc(sizeof(stack));
    temp->ch = ch;
    temp->next = *stk;
    *stk = temp;
}

int main() {
    stack *stk = NULL;
    char str[51], temp;
    int N, count;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%s", str);
        for (count = 0; count < strlen(str); count++) {
            if(str[count] == '(')
                push(&stk, str[count]);
            else if (stk == NULL)
                break;
            else
                pop(&stk);
        }
        if (count == strlen(str) && stk == NULL)
            printf("YES\n");
        else
            printf("NO\n");
        while(stk != NULL)
            pop(&stk);
    }
    return 0;
}