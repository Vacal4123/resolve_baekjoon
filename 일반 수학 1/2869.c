#include <stdio.h>

int main()
{
    int A, B, V;
    scanf("%d %d %d", &A, &B, &V);
    if ((V - B) % (A - B) > 0)
        printf("%d\n", (V - B) / (A - B) + 1);
    else
        printf("%d\n", (V - B) / (A - B));
    return 0;
}