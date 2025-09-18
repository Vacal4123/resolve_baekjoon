#include<stdio.h>

int main() {
    int M, N;
    scanf("%d %d", &M, &N);
    for (; M <= N; M++) {
        if (M == 1) continue;
        else
            for (int d = 2; d*d <= M; d++) 
                if (M % d == 0)
                    goto AAA;
        printf("%d\n",M);
    AAA:
        continue;
    }
    return 0;
}