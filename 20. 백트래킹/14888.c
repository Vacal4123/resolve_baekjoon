#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int MAX = -1000000000;
int MIN = 1000000000;
int* arr;

void solve(int N, int cnt, int* op, int result) {
	if (N == cnt) {
		if (MAX < result)
			MAX = result;
		if (MIN > result)
			MIN = result;
	}
	else {
		int temp = result;
		int tempOp[4];
		for (int i = 0; i < 4; i++) {
			if (op[i] == 0)
				continue;
			result = temp;
			memmove(tempOp, op, sizeof(int) * 4);
			switch (i) {
			case 0:
				result += arr[cnt + 1];
				break;
			case 1:
				result -= arr[cnt + 1];
				break;
			case 2:
				result *= arr[cnt + 1];
				break;
			case 3:
				result /= arr[cnt + 1];
				break;
			} tempOp[i]--;
			solve(N, cnt + 1, tempOp, result);
		}
	}
}

int main() {
	int N, op[4] = {0};

	scanf("%d", &N);
	arr = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < 4; i++)
		scanf("%d", &op[i]);
	solve(N - 1, 0, op, arr[0]);

	printf("%d\n%d\n", MAX, MIN);
	return 0;
}
