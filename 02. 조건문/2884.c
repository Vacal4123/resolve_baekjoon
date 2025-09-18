#include <stdio.h>

int main()
{
    int H, M;
    scanf("%d %d", &H, &M);
    if (M < 45)
    {
        if (H == 0)
            H = 23;
        else
            H -= 1;
        printf("%d %d\n", H, (60 - 45) + M);
        return 0;
    }
    printf("%d %d\n", H, M - 45);
    return 0;
}