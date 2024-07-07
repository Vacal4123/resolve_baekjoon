#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        for (int s = 0; s < N; s++)
        {
            if ((N - s) != i)
                printf(" ");
            else
            {
                for (int q = 0; q < N - s; q++)
                    printf("*");
                break;
            }
        }
        printf("\n");
    }
    return 0;
}