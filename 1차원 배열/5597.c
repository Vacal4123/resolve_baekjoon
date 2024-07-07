#include <stdio.h>
#include <string.h>

int main()
{
    int arr[30], n;
    memset(arr, 0, sizeof(int) * 30);
    for (int i = 0; i < 28; i++)
    {
        scanf("%d", &n);
        arr[n - 1] = 1;
    }
    for (int i = 0; i < 30; i++)
        if (!arr[i])
            printf("%d\n", i + 1);
    return 0;
}