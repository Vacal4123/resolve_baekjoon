#include <stdio.h>

int Word_Count()
{
    int Judge = 1, Count = 0;
    char Spelling = ' ';
    while (1)
    {
        if ((Spelling = fgetc(stdin)) == '\n')
            break;
        else if ((Spelling != ' ' && Spelling != '\0') && Judge == 1)
        {
            Judge = 0;
            Count++;
        }
        else if (Spelling == ' ' && Judge == 0)
            Judge = 1;
    }
    return Count;
}

int main()
{
    printf("%d\n", Word_Count());
    return 0;
}