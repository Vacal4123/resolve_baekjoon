#include<stdio.h>
#include<math.h>

void hanoi(int n, int one, int two, int three) {
	if (n == 1) printf("%d %d\n", one, three);
	else {
		hanoi(n - 1, one, three, two);
		printf("%d %d\n", one, three);
		hanoi(n - 1, two, one, three);
	}
}
int main() {
	int N;
	scanf("%d", &N);
	printf("%.0lf\n", pow(2, N) - 1);
	hanoi(N, 1, 2, 3);
	return 0;
}