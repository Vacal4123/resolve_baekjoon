#include <stdio.h>
#include <string.h>

int prime[1000001];

void prime_find() {
    memset(prime, 0, sizeof(prime));
    for (int i = 2; i <= 1000; i++)
        if(prime[i] == 0)
            for (int s = i * 2; s <= 1000000; s += i)
                prime[s] = 1;
}

int main() {
    int T, num;
    prime_find();
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int res = 0;
        scanf("%d", &num);
        for (int s = 2; s<=num/2; s++)
            if(prime[s] == 0 && prime[num - s] == 0)
                res++;
        printf("%d\n", res);
    }
    return 0;
}