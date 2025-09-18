#include <stdio.h>

int main() {
	int N[2];
	while (1) {
		scanf("%d %d", &N[0], &N[1]);
		if (N[0] == 0 && N[1] == 0) break;
		if (N[1] % N[0] == 0) printf("factor\n");
		else if (N[0] % N[1] == 0) printf("multiple\n");
		else printf("neither\n");
	} return 0;
}