#include <stdio.h>
#include <string.h>

int main()
{
    int N, B, i = 0, temp;
    char result[31];

    scanf("%d %d", &N, &B);
    for (; N != 0;)
    {
        temp = N % B;
        N /= B;
        if (temp > 9)
            result[i++] = (temp - 10) + 'A';
        else
            result[i++] = temp + '0';
    }
    result[i] = '\0';
    for (i = (int)strlen(result) - 1; i >= 0; i--)
        printf("%c", result[i]);
    printf("\n");
    return 0;
}