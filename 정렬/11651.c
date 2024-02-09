#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
} Pos;

int cmp(const void *a, const void *b)
{
    Pos t1 = *(Pos *)a;
    Pos t2 = *(Pos *)b;
    if (t1.y != t2.y)
        return t1.y - t2.y;
    else
        return t1.x - t2.x;
}

int main()
{
    int N;
    Pos *pos;

    scanf("%d", &N);
    pos = (Pos *)malloc(sizeof(Pos) * N);
    for (int i = 0; i < N; i++)
        scanf("%d %d", &pos[i].x, &pos[i].y);
    qsort(pos, N, sizeof(Pos), cmp);

    for (int i = 0; i < N; i++)
        printf("%d %d\n", pos[i].x, pos[i].y);
    return 0;
}