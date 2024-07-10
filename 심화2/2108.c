#include <stdio.h>
#include <math.h>

int Num_count[8001]; //-4000

int main() {
	int i, N, ch, max = -4000, min = 4000, sum = 0, bin = 0, mid, count = 0, jud, max_bin;
	int avg;
	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%d", &ch);
		if (min > ch)
			min = ch;
		if (max < ch)
			max = ch;
		Num_count[ch + 4000] += 1;
		sum += ch;
	}
	for (i = 0; i < 8001; i++) {
		if (Num_count[i] != 0) {
			if (bin < Num_count[i]) {
				bin = Num_count[i];
				jud = 0;
			}
			else if (bin == Num_count[i])
				jud = 1;
			for (int k = 0; k < Num_count[i]; k++) {
				if (count == N / 2)
					mid = i - 4000;
				count++;
			}
		}
	}
	for (i = 0; i < 8001; i++) {
		if (bin == Num_count[i]) {
			if (jud == 1)
				jud = 0;
			else {
				max_bin = i - 4000;
				break;
			}
		}
	}
	avg =  floor(((double)sum / N)+0.5);
	printf("%d\n%d\n%d\n%d\n", avg, mid, max_bin, max - min);
	return 0;
}