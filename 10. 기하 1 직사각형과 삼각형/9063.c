#include <stdio.h>

int main() {
	int N, x, y;

	int max_x = -1, min_x = -1;
	int max_y = -1, min_y = -1;

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &x, &y);
		if (max_x == -1 || max_x < x) max_x = x;
		if (min_x == -1 || min_x > x) min_x = x;
		if (max_y == -1 || max_y < y) max_y = y;
		if (min_y == -1 || min_y > y) min_y = y;
	}
	printf("%d\n", (max_x - min_x) * (max_y - min_y));
	return 0;
}