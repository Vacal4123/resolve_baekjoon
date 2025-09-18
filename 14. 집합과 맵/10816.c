#include <stdio.h>

int S[20000001] = {
    0,
};

int main()
{
    int N, temp;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &temp);
        S[temp + 10000000]++;
    }
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &temp);
        printf("%d ", S[temp + 10000000]);
    }
    puts("");
    return 0;
}