#include <stdio.h>
#include <string.h>

int main()
{
    int Paper[100][100], result = 0, Count, Input[2];
    memset(Paper, 0, sizeof(int) * 10000);
    scanf("%d", &Count);
    for (int i = 0; i < Count; i++)
    {
        scanf("%d %d", &Input[0], &Input[1]);
        for (int Plus_L = 0; Plus_L < 10; Plus_L++)
            for (int Plus_U = 0; Plus_U < 10; Plus_U++)
                Paper[Input[0] + Plus_U][Input[1] + Plus_L] = 1;
    }
    for (int i = 0; i < 100; i++)
        for (int s = 0; s < 100; s++)
            if (!Paper[i][s])
                result++;
    printf("%d\n", 10000 - result);
    return 0;
}