#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char N[31];
    int B, not, result = 0, num;

    scanf("%s %d", N, &B);
    not = (int)strlen(N) - 1;
    for (int i = 0; N[i] != '\0'; i++)
    {
        if (N[i] >= '0' && N[i] <= '9')
            num = N[i] - '0';
        else if (N[i] >= 'A' && N[i] <= 'Z')
            num = (N[i] - 'A') + 10;
        result += (num * (int)pow(B, not --));
    }
    printf("%d\n", result);
    return 0;
}