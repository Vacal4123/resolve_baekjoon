#include <stdio.h>

int main()
{
    int Count[4] = {0}, T, C;

    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &C);
        for (; C > 0;)
        {
            if (C >= 25)
            {
                Count[0]++;
                C -= 25;
            }
            else if (C >= 10)
            {
                Count[1]++;
                C -= 10;
            }
            else if (C >= 5)
            {
                Count[2]++;
                C -= 5;
            }
            else
            {
                Count[3]++;
                C -= 1;
            }
        }
        for (int s = 0; s < 4; s++)
        {
            printf("%d ", Count[s]);
            Count[s] = 0;
        }
        printf("\n");
    }
    return 0;
}