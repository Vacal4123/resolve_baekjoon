#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void* a, const void* b) {
    return strcmp(*(char**)a, *(char**)b);
}

int bin_Search(int N, char* str, char** arr) {
    int low = 0, high = N - 1, m;
    while (low <= high) {
        m = (low + high) / 2;
        if (strcmp(arr[m], str) == 0)
            return 1;
        else if (strcmp(arr[m], str) < 0)
            low = m + 1;
        else
            high = m - 1;
    }
    return 0;
}

int deduplication_Count(int cnt, char** arr) {
    int res = 1;
    for (int i = 1; i < cnt; i++) {
        if (strcmp(arr[i], arr[i - 1]) != 0)
            res++;
    }
    return res;
}

void insert_Factor(char* str, int N, char** arr) {
    arr[N] = (char*)malloc(sizeof(char) * 21);
    strcpy(arr[N], str);
    qsort(arr, N + 1, sizeof(char*), cmp);
}

int main() {
    char** peoples = NULL, name[2][21];
    int N, cnt = 0, fac = 0;

    scanf("%d", &N);
    peoples = (char**)malloc(sizeof(char*) * N);
    insert_Factor("ChongChong", cnt++, peoples);
    for (int i = 0; i < N; i++) {
        fac = -1;
        scanf("%s %s", name[0], name[1]); 
        if (bin_Search(cnt, name[0], peoples))
            fac = 1;
        else if (bin_Search(cnt, name[1], peoples))
            fac = 0;
        if(fac != -1)
            insert_Factor(name[fac], cnt++, peoples);
    }
    printf("%d\n", deduplication_Count(cnt, peoples));
    return 0;
}