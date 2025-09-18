#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, N, Max = 0;
    double sum = 0;
    scanf("%d", &N);

    int *subject = malloc(sizeof(int) * N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &subject[i]);
        if (Max < subject[i])
            Max = subject[i];
    }
    for (i = 0; i < N; i++)
        sum += ((double)subject[i] / Max) * 100;
    printf("%f\n", sum / N);
    return 0;
}