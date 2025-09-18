#include <stdio.h>

int main() {
	int arr[100], sum, n, i;

	while (1) {
		scanf("%d", &n);
		if (n == -1) break;
		sum = 0; i = 0;
		for (int s = 1; s <= n / 2; s++)
			if (n % s == 0) {
				sum += s;
				arr[i++] = s;
			}
		if (sum == n) {
			printf("%d =", n);
			for (int s = 0; s < i; s++) {
				printf(" %d", arr[s]);
				if (s != i - 1) printf(" +");
			} printf("\n");
		}
		else printf("%d is NOT perfect.\n", n);
	} return 0;
}