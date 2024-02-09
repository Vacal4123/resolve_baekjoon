#include <stdio.h>
#include <stdlib.h>

int cmp (const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int overlap_del(int **arr, int N) {
    int size = 0, *temp = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N - 1; i++)
        if((*arr)[i] != (*arr)[i+1])
            temp[size++] = (*arr)[i];
    if(temp[size - 1] != (*arr)[N-1])
        temp[size++] = (*arr)[N - 1];
    free((*arr)); *arr = temp;
    return size;
}

int bin_search(int *arr, int N, int num){
    int High = N - 1, Low = 0;
    int index;
    while(1) {
        index = (High + Low) / 2;
        if(num == arr[index])
            return index;
        else if (num > arr[index])
            Low = index + 1;
        else
            High = index - 1;
    }
}

int main() {
    int N, *X, *sorted, size;
    scanf("%d", &N);

    X = (int *)malloc(sizeof(int) * N);
    sorted = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N;i++) {
        scanf("%d", &X[i]);
        sorted[i] = X[i];
    }
    qsort(sorted, N, sizeof(int), cmp);
    size = overlap_del(&sorted, N);

    for (int i = 0; i < N; i++)
        printf("%d ", bin_search(sorted, size, X[i]));
    puts("");
    return 0;
}