#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prime[1000001] = {
    0,
};
int prime_num[1000001] = {
    0,
};

int Jud_Prime(int n)
{
    for (int i = 2; i <= (int)sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return n > 1 ? 1 : 0;
}

int main()
{
    int T, *num, max;

    scanf("%d", &T);
    num = (int *)malloc(sizeof(int) * T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &num[i]);
        if (i == 0 || max < num[i])
            max = num[i];
    }

    int count = 0;
    for (int i = 2; i <= max; i++)
        if (Jud_Prime(i) == 1)
        {
            prime[i] = 1;
            prime_num[count++] = i;
        }

    for (int i = 0; i < T; i++)
    {
        int res = 0;
        for (int s = 0; s < count && prime_num[s] <= num[i] / 2; s++)
            if (prime[prime_num[s]] == 1 && prime[num[i] - prime_num[s]] == 1)
                res++;
        printf("%d\n", res);
    }
    return 0;
}