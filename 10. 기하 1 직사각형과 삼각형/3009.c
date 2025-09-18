#include<stdio.h>

int main() {
	int Temp[2];
	int Jud1[2][2]; int Jud2[2][2] = { 0, };
	for (int i = 0; i < 3; i++) {
		scanf("%d %d", &Temp[0], &Temp[1]);
		for (int d = 0; d < 2; d++) {
			for (int s = 0; s < 2; s++) {
				if (Jud1[d][s] == Temp[d] && Jud2[d][s] == 1) {
					Jud2[d][s]++;
					break;
				}
				else if (Jud1[d][s] != Temp[d] && Jud2[d][s] == 0) {
					Jud1[d][s] = Temp[d];
					Jud2[d][s] = 1;
					break;
				}
			}
		}
	}
	for (int d = 0; d < 2; d++) {
		for (int s = 0; s < 2; s++)
			if (Jud2[d][s] == 1)
				Temp[d] = Jud1[d][s];
	}
	printf("%d %d\n", Temp[0], Temp[1]);
	return 0;
}