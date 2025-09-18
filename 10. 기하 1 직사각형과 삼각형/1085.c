#include<stdio.h>

int main() {
	int x, y, w, h, Temp = 0;
	int Num[4];
	scanf("%d %d %d %d", &x, &y, &w, &h);
	Num[0] = w - x; Num[1] = x; Num[2] = h - y; Num[3] = y;
	for (int i = 0; i < 4; i++) {
		if (Temp == 0)
			Temp = Num[i];
		if(Temp>Num[i])
			Temp = Num[i];
	}
	printf("%d\n", Temp);
	return 0;
}