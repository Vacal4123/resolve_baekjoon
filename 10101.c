#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N[3], sum = 0;

	for (int i = 0; i < 3; i++) {
		scanf("%d", &N[i]);
		sum += N[i];
	}
	if (sum == 180) {
		if (N[0] == N[1] && N[1] == N[2]) printf("Equilateral\n");
		else if (N[0] == N[1] || N[0] == N[2] || N[1] == N[2]) printf("Isosceles\n");
		else printf("Scalene\n");
	}
	else printf("Error\n");
	return 0;
}