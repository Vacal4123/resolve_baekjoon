#include <stdio.h>

void Print_Word()
{
    char Spelling;
    while (1)
    {
        if ((Spelling = fgetc(stdin)) == EOF)
            break;
        printf("%c", Spelling);
    }
}

int main()
{
    Print_Word();
    return 0;
}