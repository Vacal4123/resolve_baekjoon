#include <stdio.h>
#include <string.h>

int main()
{
    int N, count;
    char str[50];
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        count = 0;
        scanf("%s", str);
        for (int s = 0; s < (int)strlen(str); s++)
        {
            if (count == -1)
                break;
            if (str[s] == '(')
                count++;
            else if (str[s] == ')')
                count--;
        }
        if (count == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}