#include <stdio.h>
#include <stdlib.h>

int res, cnt;

void merge(int* arr, int left, int right, int K) {
	int mid = (left + right) / 2, n1 = mid - left + 1, n2 = right - mid;

	int* L = (int*)malloc(sizeof(int) * n1);
	int* R = (int*)malloc(sizeof(int) * n2);

	for (int i = 0; i < n1; i++)
		L[i] = arr[left + i];
	for (int i = 0; i < n2; i++)
		R[i] = arr[mid + 1 + i];

	int i = 0, j = 0, k = left;
	while (i < n1 && j < n2) {
		if (L[i] < R[j])
			arr[k] = L[i++];
		else
			arr[k] = R[j++];
		if (++cnt == K)
			res = arr[k];
		k++;
	}
	while (i < n1) {
		arr[k] = L[i++];
		if (++cnt == K)
			res = arr[k];
		k++;
	}
	while (j < n2) {
		arr[k] = R[j++];
		if (++cnt == K)
			res = arr[k];
		k++;
	}

	free(L);
	free(R);
}

void merge_sort(int* arr, int left, int right, int K) {
	if (K <= cnt) return;
	if (left < right) {
		int mid = (left + right) / 2;
		merge_sort(arr, left, mid, K);
		merge_sort(arr, mid + 1, right, K);
		merge(arr, left, right, K);
	}
}

int main() {
	int* A, N, K;
	scanf("%d %d", &N, &K);
	
	A = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++)
		scanf("%d", &A[i]);
	merge_sort(A, 0, N - 1, K);
	printf("%d\n", res ? res : -1);
	return 0;
}