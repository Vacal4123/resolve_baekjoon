#include <stdio.h>

int main()
{
    int N, Count, min = -1;
    scanf("%d", &N);

    for (int i = 0; i * 5 <= N; i++)
    {
        if ((N - (i * 5)) % 3 == 0)
        {
            Count = i;
            Count += (N - (i * 5)) / 3;
            if (min == -1 || min > Count)
                min = Count;
        }
    }
    printf("%d\n", min);
    return 0;
}

/*
    for (int i = N / 5; i >= 0; i--) {
        sum = 5 * i;
        if ((N - sum) % 3 == 0) {
            printf("%d", i + ((N - sum) / 3));
            return 0;
        }
    }
    printf("-1\n");
*/