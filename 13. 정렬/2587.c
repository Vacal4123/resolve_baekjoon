#include <stdio.h>

void Bubble_Sort(int *N, int Count)
{
    for (int i = Count - 1; i > 0; i--)
    {
        for (int s = 0; s < i; s++)
            if (N[s] > N[s + 1])
            {
                int temp = N[s];
                N[s] = N[s + 1];
                N[s + 1] = temp;
            }
    }
}

int main()
{
    int N[5], sum = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &N[i]);
        sum += N[i];
    }
    Bubble_Sort(N, 5);
    printf("%d\n%d\n", sum / 5, N[2]);
    return 0;
}