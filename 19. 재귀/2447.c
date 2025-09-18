#include<stdio.h>

int Star(int N, int T, int slash) {
	int teT = T, teslash = slash;
	while (1) {
		if (teT == 0 || teslash == 0)
			break;
		if (teT % 3 == 1 && teslash % 3 == 1) {
			printf(" ");
			goto AAA;
		}
		teT /= 3; teslash /= 3;
	}
	printf("*");
AAA:
	if (N == T + 1) {
		printf("\n");
		if (N == slash + 1) return 0;
		T = -1; slash++;
	}
	return Star(N, T + 1, slash);
}

int main() {
	int N;
	scanf("%d", &N);
	Star(N, 0, 0);
	return 0;
}