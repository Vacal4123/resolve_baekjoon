#include<stdio.h>

int main() {
    int n, res;
    while (1) {
        res = 0;
        scanf("%d", &n);
        if (!n) break;
        for (int i = n + 1; i <= 2 * n; i++) {
            if (i == 1) continue;
            for (int d = 2; d * d <= i; d++)
                if (i % d == 0) goto AAA;
            res++;
        AAA:
            continue;
        }
        printf("%d\n", res);
    }
    return 0;
}