#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N[3], max = 0;
	while (1) {
		for (int i = 0; i < 3; i++) {
			scanf("%d", &N[i]);
			if (N[max] < N[i]) max = i;
		}
		if (N[0] == 0 && N[1] == 0 && N[2] == 0) break;
		if (N[max] < N[max == 2 ? 1 : 2] + N[max == 2 ? 0 : max == 1 ? 0 : 1]) {
			if (N[0] == N[1] && N[1] == N[2]) printf("Equilateral\n");
			else if (N[0] == N[1] || N[0] == N[2] || N[1] == N[2]) printf("Isosceles\n");
			else printf("Scalene\n");
		}
		else printf("Invalid\n");
	}
	return 0;
}
