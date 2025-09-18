#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int num;
    char name[21];
} pok;

int cmp(const void *a, const void *b) {
    char *s1 = ((pok *)a)->name;
    char *s2 = ((pok *)b)->name;
    return strcmp(s1, s2);
}

int Bin_Search(pok *poks, int n, char *name) {
    int low = 0, high = n - 1;
    int mid;
    while(low <= high) {
        mid = (low + high) / 2;
        if(strcmp(poks[mid].name, name) == 0)
            return mid;
        else if(strcmp(poks[mid].name, name) > 0)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main() {
    int N, M, temp;
    char str[21];
    pok *poks_num, *poks_name;

    scanf("%d %d", &N, &M);
    poks_num = (pok *)malloc(sizeof(pok) * N);
    poks_name = (pok *)malloc(sizeof(pok) * N);
    for (int i = 0; i < N; i++) {
        scanf("%s", poks_num[i].name);
        poks_num[i].num = i + 1;
    }
    memcpy(poks_name, poks_num, N);
    qsort(poks_name, N, sizeof(pok), cmp);
    for (int i = 0; i < M; i++) {
        scanf("%s", str);
        temp = atoi(str);
        if(temp > 0)
            printf("%s\n", poks_num[temp - 1].name);
        else {
            temp = Bin_Search(poks_name, N, str);
            printf("%d\n", poks_name[temp].num);
        }
    }
    return 0;
}