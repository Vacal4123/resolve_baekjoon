#include <stdio.h>

int factorial(int N) {
    int res = 1;
    for(int i = 1; i <= N; i++)
        res *= i;
    return res;
}

int main() {
    int N, res;
    scanf("%d", &N);

    res = factorial(N);
    res /= (factorial(N - 2) * factorial(2));
    printf("%d\n", res * 2);
    return 0;
}