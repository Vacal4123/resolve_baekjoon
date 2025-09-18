#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int Binary_Search(int *arr, int N, int num) {
    int low = 0, high = N - 1, mid;
    while(low <= high) {
        mid = (low + high) / 2;
        if(arr[mid] == num)
            return 0;
        else if(arr[mid] > num)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return 1;
}

int main() {
    int a, b, *A, *B, res = 0;

    scanf("%d %d", &a, &b);
    A = (int *)malloc(sizeof(int) * a);
    B = (int *)malloc(sizeof(int) * b);
    for (int i = 0; i < a; i++)
        scanf("%d", &A[i]);
    for (int i = 0; i < b; i++)
        scanf("%d", &B[i]);
    qsort(A, a, sizeof(int), cmp);
    qsort(B, b, sizeof(int), cmp);

    for (int i = 0; i < a; i++)
        res += Binary_Search(B, b, A[i]);
    for (int i = 0; i < b; i++)
        res += Binary_Search(A, a, B[i]);
    printf("%d\n", res);
    return 0;
}