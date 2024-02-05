#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    printf("%lld\n3\n", ((long long int)n * n) * n);
    return 0;
}