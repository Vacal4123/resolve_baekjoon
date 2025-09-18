#include <stdio.h>

int pi(int Count1,int Count2, int n1, int n2) {
	if (Count1 == Count2)
		return n1;
	int temp = n2;
	n2 = n1 + n2; n1 = temp;
	return pi(Count1, Count2 + 1, n1, n2);
}

int main() {
	int N;
	scanf("%d", &N);
	printf("%d\n", pi(N, 0, 0, 1));
	return 0;
}