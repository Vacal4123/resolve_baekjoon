#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void cantoer(char* str, int left, int right) {
	if (left >= right)
		return;
	int len = right - left + 1;
	int num = len / 3;
	memset((str + left) + num, ' ', num);
	cantoer(str, left, left + num - 1);
	cantoer(str, left + 2 * num, right);
}

int main() {
	char* str;
	int N;
	while (scanf("%d", &N) != EOF) {
		str = (char*)malloc((int)pow(3, N) + 1);
		memset(str, '-', (int)pow(3, N));
		str[(int)pow(3, N)] = '\0';
		cantoer(str, 0, pow(3, N) - 1);
		printf("%s\n", str);
		free(str);
	}
	return 0;
}