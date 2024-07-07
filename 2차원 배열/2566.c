#include <stdio.h>

int main()
{
    int arr[9][9], MAX_NUM = 0, Pos[2];
    for (int i = 0; i < 9; i++)
        for (int s = 0; s < 9; s++)
        {
            scanf("%d", &arr[i][s]);
            if (arr[i][s] >= MAX_NUM)
            {
                MAX_NUM = arr[i][s];
                Pos[0] = i + 1, Pos[1] = s + 1;
            }
        }
    printf("%d\n%d %d\n", MAX_NUM, Pos[0], Pos[1]);
    return 0;
}