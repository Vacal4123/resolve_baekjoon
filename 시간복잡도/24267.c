// https://carrot-farmer.tistory.com/57
#include <stdio.h>

int main() {
    int n;
    long int res;
    scanf("%d", &n);

    res = (long int)n * (n - 2) * (n - 1) / 6;
    printf("%ld\n3\n", res);
    return 0;
}