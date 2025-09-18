#include <stdio.h>
#include <string.h>

int main()
{
    int num, sum = 0;
    char Word[101];
    int Jud[26] = {
        0,
    };
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        scanf("%s", Word);
        for (int s = 0; s < strlen(Word); s++)
        {
            if ((((s + 1) - Jud[Word[s] - 'a']) > 1) && (Jud[Word[s] - 'a'] != 0))
                goto AAA; // goto문 사용 지양할 것
            Jud[Word[s] - 'a'] = s + 1;
        }
        sum++;
    AAA:
        memset(Jud, 0, sizeof(Jud));
        continue;
    }
    printf("%d\n", sum);
    return 0;
}