#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int N, M;

void Sequence(int order, int *arr) {
	int* tmp = (int*)malloc(sizeof(int) * M);
	for (int i = 1; i <= N; i++) {
		if (order == 1) memset(tmp, 0, sizeof(int) * M);
		else memmove(tmp, arr, sizeof(int) * M);
		tmp[order - 1] = i;
		if (order == M) {
			for (int K = 0; K < M; K++)
				printf("%d ", tmp[K]);
			printf("\n");
		}
		else
			Sequence(order + 1, tmp);
	}
	free(tmp);
}

void Start() {
	int* temp;
	scanf("%d %d", &N, &M);
	temp = (int*)malloc(sizeof(int) * M);
	Sequence(1, temp);
	free(temp);
}

int main() {
	Start();
	return 0;
}