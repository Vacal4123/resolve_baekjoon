#include <stdio.h>

int com(int N, int M)
{
    int res = 1;
    for (int i = 1; i <= N; i++)
    {
        res *= M - i + 1;
        res /= i;
    }
    return res;
}

int main()
{
    int T, N, M;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &N, &M);
        N = M / 2 > N ? N : M - N;
        printf("%d\n", com(N, M));
    }
    return 0;
}