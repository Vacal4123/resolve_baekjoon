#include <stdio.h>

long long int find_GCD(long long int a, long long int b) {
    long long int r = a % b;
    if(r == 0)
        return b;
    return find_GCD(b, r);
}

int main() {
    long long int A, B;
    scanf("%lld %lld", &A, &B);
    printf("%lld\n", (A * B) / find_GCD(A, B));
    return 0;
}