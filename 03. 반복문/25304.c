#include <stdio.h>

int main()
{
    int Money, Times, Price, Quantity;
    scanf("%d %d", &Money, &Times);
    for (int i = 0; i < Times; i++)
    {
        scanf("%d %d", &Price, &Quantity);
        if (Money >= 0)
            Money -= (Price * Quantity);
    }
    printf("%s\n", Money != 0 ? "No" : "Yes");
    return 0;
}