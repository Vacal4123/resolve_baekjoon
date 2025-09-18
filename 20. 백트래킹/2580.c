#include <stdio.h>

int sudoku[9][9];
int blank[64];

int isPossible(int row, int col, int num) {
	for (int i = 0; i < 9; i++) {
		if (i != col && num == sudoku[row][i])
			return 0;
		if (i != row && num == sudoku[i][col])
			return 0;
	}
	int startRow = (row / 3) * 3;
	int startCol = (col / 3) * 3;
	for (int i = startRow; i < startRow + 3; i++)
		for (int k = startCol; k < startCol + 3; k++) {
			if (i == row && k == col) continue;
			if (num == sudoku[i][k])
				return 0;
		}
	return 1;
}

int solve(int cnt, int idx) {
	if (cnt == idx)
		return 1;
	else {
		int row = blank[idx] / 10 - 1;
		int col = blank[idx] % 10 - 1;
		for (int k = 1; k < 10; k++) {	
			if (isPossible(row, col, k)) {
				sudoku[row][col] = k;
				if (solve(cnt, idx + 1))
					return 1;
				sudoku[row][col] = 0;
			}
		}
		return 0;
	}
}

int main() {
	int cnt = 0;
	for (int i = 0; i < 9; i++)
		for (int k = 0; k < 9; k++) {
			scanf("%d", &sudoku[i][k]);
			if (sudoku[i][k] == 0)
				blank[cnt++] = ((i + 1) * 10) + k + 1;
		}

	solve(cnt, 0);
	for (int i = 0; i < 9; i++) {
		for (int k = 0; k < 9; k++)
			printf("%d ", sudoku[i][k]);
		printf("\n");
	}

	return 0;
}