#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, N, M, max = 0;

    scanf("%d %d", &N, &M);
    arr = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < N - 2; i++)
        for (int s = i + 1; s < N - 1; s++)
            for (int k = s + 1; k < N; k++)
            {
                int temp = arr[i] + arr[s] + arr[k];
                if (temp <= M && max < temp)
                    max = temp;
            }

    printf("%d\n", max);
}