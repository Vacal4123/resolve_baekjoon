#include <stdio.h>
#include <stdlib.h>

typedef struct Stack stack;
struct Stack {
    int num;
    stack *next;
};

int pop(stack **stk) {
    if(*stk == NULL) {
        return 0;
    }
    else {
        stack *temp = *stk;
        int num = temp->num;
        *stk = (*stk)->next;
        free(temp);
        return num;
    }
}

void push(stack **stk, int num) {
    stack *temp = (stack *)malloc(sizeof(stack));
    temp->num = num;
    temp->next = *stk;
    *stk = temp;
}

int main() {
    stack *stk = NULL;
    int N, num, sum = 0;

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        if(num == 0)
            pop(&stk);
        else
            push(&stk, num);
    }
    while(stk != NULL)
        sum += pop(&stk);
    printf("%d\n", sum);
    return 0;
}