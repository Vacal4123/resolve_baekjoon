#include <stdio.h>

long long int factorial(int num, long long int res) {
    if (num <= 1)
        return res;
    else
        return factorial(num - 1, res * num);
}

int main() {
    int num;
    long long int res = 1;
    scanf("%d", &num);
    printf("%lld\n", factorial(num, res));
    return 0;
}