#include <stdio.h>
#include <string.h>

int main()
{
    char Subject[51], Grade[3];
    double Input, Score1 = 0, Score2 = 0;
    for (int i = 0; i < 20; i++)
    {
        scanf("%s %lf %s", Subject, &Input, Grade);
        if (strcmp(Grade, "P") == 0)
            continue;
        else
        {
            Score1 += Input;
            if (strcmp(Grade, "A+") == 0)
                Score2 += (4.5 * Input);
            else if (strcmp(Grade, "A0") == 0)
                Score2 += (4.0 * Input);
            else if (strcmp(Grade, "B+") == 0)
                Score2 += (3.5 * Input);
            else if (strcmp(Grade, "B0") == 0)
                Score2 += (3.0 * Input);
            else if (strcmp(Grade, "C+") == 0)
                Score2 += (2.5 * Input);
            else if (strcmp(Grade, "C0") == 0)
                Score2 += (2.0 * Input);
            else if (strcmp(Grade, "D+") == 0)
                Score2 += (1.5 * Input);
            else if (strcmp(Grade, "D0") == 0)
                Score2 += (1.0 * Input);
        }
    }
    printf("%lf\n", Score2 / Score1);
    return 0;
}