#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[101];
    int age, order;
} Person;

int cmp(const void *a, const void *b)
{
    Person t1 = *(Person *)a, t2 = *(Person *)b;
    if(t1.age != t2.age)
        return t1.age - t2.age;
    else
        return t1.order - t2.order;
}

int main()
{
    int N;
    Person *per;
    scanf("%d", &N);
    per = (Person *)malloc(sizeof(Person) * N);

    for (int i = 0; i < N; i++) {
        scanf("%d %s", &per[i].age, per[i].name);
        per[i].order = i;
    }
    qsort(per, N, sizeof(Person), cmp);

    for (int i = 0; i < N; i++)
        printf("%d %s\n", per[i].age, per[i].name);
    return 0;
}