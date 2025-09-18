#include<stdio.h>

int main() {
    int M, N, result = 0, min = 0;
    scanf("%d %d", &M, &N);
    for (; M <= N; M++) {
        if (M == 1) continue;
        else
            for (int d = 2; d*d <= M; d++) 
                if (M % d == 0)
                    goto AAA;
        if (min == 0)
            min = M;
        result += M;
    AAA:
        continue;
    }
    if (result == 0)
        printf("-1\n");
    else
        printf("%d\n%d\n", result, min);
    return 0;
}