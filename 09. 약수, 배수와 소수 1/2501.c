#include <stdio.h>

int main() {
	int N, K, Co = 0;
	scanf("%d %d", &N, &K);
	for (int i = 1; i <= N; i++) {
		if (N % i == 0) Co++;
		if (Co == K) {
			printf("%d\n", i);
			return 0;
		}
	}
	printf("0\n");
	return 0;
}