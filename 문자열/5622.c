#include <stdio.h>
#include <string.h>

int main()
{
    int Time = 0;
    char Word[16];
    scanf("%s", Word);
    for (int i = 0; i < strlen(Word); i++)
    {
        switch (Word[i])
        {
        case 'A':
        case 'B':
        case 'C':
            Time += 3;
            break;
        case 'D':
        case 'E':
        case 'F':
            Time += 4;
            break;
        case 'G':
        case 'H':
        case 'I':
            Time += 5;
            break;
        case 'J':
        case 'K':
        case 'L':
            Time += 6;
            break;
        case 'M':
        case 'N':
        case 'O':
            Time += 7;
            break;
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            Time += 8;
            break;
        case 'T':
        case 'U':
        case 'V':
            Time += 9;
            break;
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            Time += 10;
            break;
        }
    }
    printf("%d\n", Time);
    return 0;
}