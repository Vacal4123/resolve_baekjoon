#include <stdio.h>
#include <stdlib.h>

int Count = 0;

int ispossible(int col, int N, int* ch) {
	if (col == 1) return 1;
	for (int i = 0; i < col - 1; i++)
		if (ch[col - 1] == ch[i] || abs(ch[col - 1] - ch[i]) == abs((col - 1) - i))
			return 0;
	return 1;
}

void N_queen(int col, int N, int* ch) {
	for (int i = 0; i < N; i++) {
		ch[col - 1] = i;
		if (ispossible(col, N, ch)) {
			if (col == N) {
				Count++;
				return;
			}
			N_queen(col + 1, N, ch);
		}
	}
}

int main() {
	int N, * chess;
	scanf("%d", &N);
	chess = (int*)malloc(sizeof(int) * N);
	N_queen(1, N, chess);
	printf("%d\n", Count);
	return 0;
}