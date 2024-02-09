#include <stdio.h>
#include <string.h>

int main() {
    int N, arr[10001], in;
    scanf("%d", &N);

    memset(arr, 0, 10001 * sizeof(int));
    for (int i = 0; i < N;i++) {
        scanf("%d", &in);
        arr[in]++;
    }

    for (int i = 1; i <= 10000;i++)
        if(arr[i] != 0)
            for (int s = 0; s < arr[i]; s++)
                printf("%d\n", i);
    return 0;
}