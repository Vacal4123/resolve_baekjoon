#include <stdio.h>

int find_GCD(int a, int b)
{
    int r = a % b;
    if (r == 0)
        return b;
    return find_GCD(b, r);
}

int main() {
    int A[2], B[2], res[2], GCD;
    scanf("%d %d", &A[0], &A[1]);
    scanf("%d %d", &B[0], &B[1]);
    res[0] = (A[0] * B[1]) + (B[0] * A[1]);
    res[1] = A[1] * B[1];
    while((GCD = find_GCD(res[1], res[0])) != 1) {
        res[0] /= GCD;
        res[1] /= GCD;
    }
    printf("%d %d\n", res[0], res[1]);
    return 0;
}