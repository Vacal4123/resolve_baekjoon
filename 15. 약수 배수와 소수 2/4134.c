#include <stdio.h>
#include <math.h>

int Jud_Prime(long long int n)
{
    for (long long int i = 2; i <= sqrt((double)n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return n > 1 ? 1 : 0;
}

int main()
{
    int N;
    long long int num;

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &num);
        for (long long int s = num;; s++)
            if (Jud_Prime(s) == 1)
            {
                printf("%lld\n", s);
                break;
            }
    }
    return 0;
}