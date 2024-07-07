#include <stdio.h>

int Duplication_Check()
{
    char ch;
    int Check[26] = {0};
    int Max_Dup = 0, Result = -1;
    while (1)
    {
        if ((ch = fgetc(stdin)) == '\n')
            break;
        else if (ch >= 'A' && ch <= 'Z')
        {
            Check[ch - 'A']++;
            if (Check[ch - 'A'] > Max_Dup)
                Max_Dup = Check[ch - 'A'];
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            Check[ch - 'a']++;
            if (Check[ch - 'a'] > Max_Dup)
                Max_Dup = Check[ch - 'a'];
        }
    }
    for (int i = 0; i < 26; i++)
        if (Max_Dup == Check[i])
        {
            if (Result != -1)
                return -1;
            Result = i;
        }
    return Result;
}

int main()
{
    int Result = Duplication_Check();
    printf("%c\n", (Result != -1) ? (Result + 'A') : '?');
    return 0;
}