#include <stdio.h>

int main()
{
    int N, min = 0, max = 0, num;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num);
        if (min == 0 || min > num)
            min = num;
        if (max == 0 || max < num)
            max = num;
    }
    printf("%d\n", min * max);
    return 0;
}