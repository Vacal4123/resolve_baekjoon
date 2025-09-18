#include<stdio.h>

int main() {
    int N, result = 0, ans, Jud;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &ans); Jud = 0;
        if (ans == 1) continue;
        else
            for (int d = 1; d <= ans; d++) {
                if (ans % d == 0)
                    Jud++;
                if (Jud == 3)
                    goto AAA;
            }
            result++;
    AAA:
        continue;
    }
    printf("%d\n", result);
    return 0;
}