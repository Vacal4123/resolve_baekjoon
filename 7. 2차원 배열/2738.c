#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, M, **arr, NUM;
	scanf("%d %d", &N, &M);
	arr = (int **)malloc(sizeof(int *) * N);
	for (int i = 0; i < N; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * M);
		for (int s = 0; s < M; s++)
			scanf("%d", &arr[i][s]);
	}
	for (int i = 0; i < N; i++)
		for (int s = 0; s < M; s++)
		{
			scanf("%d", &NUM);
			arr[i][s] += NUM;
		}
	for (int i = 0; i < N; i++)
	{
		for (int s = 0; s < M; s++)
			printf("%d ", arr[i][s]);
		printf("\n");
	}
	return 0;
}