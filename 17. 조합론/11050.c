#include <stdio.h>

int fac(int N) {
    if(N == 1 || N == 0)
        return 1;
    else
        return fac(N - 1) * N;
}

int main() {
    int N, K;
    scanf("%d %d", &N, &K);
    printf("%d\n", fac(N)/(fac(N-K) * fac(K)));
    return 0;
}