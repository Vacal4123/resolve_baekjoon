#include <stdio.h>
#include <math.h>

int main() {
    int N, sum, temp;
    scanf("%d", &N);

    for (int i = 0; pow(10, i) < N; i++)
        temp = i;
    temp++;
    for (int i = N - 9 * temp > 0 ? N - 9 * temp : 1; i <= N; i++) {
        temp = sum = i;
        for (; temp > 0; temp /= 10)
            sum += (temp % 10);
        if(sum == N) {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("0\n");
    return 0;
}