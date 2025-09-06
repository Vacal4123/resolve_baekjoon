#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node {
	char str[11];
	int cnt;
}node;

int cmp_str(const void* a, const void* b) {
	return strcmp(*(char**)a, *(char**)b);
}

int cmp_voca(const void* a, const void* b) {
	node* na = (node*)a;
	node* nb = (node*)b;
	if (na->cnt == nb->cnt) {
		if (strlen(na->str) == strlen(nb->str))
			return strcmp(na->str, nb->str);
		return strlen(nb->str) - strlen(na->str);
	}
	return nb->cnt - na->cnt;
}

int deduplication_Count(int n, char** arr, node* voca) {
	int cnt = 0;
	voca[cnt].cnt = 1;
	strcpy(voca[cnt].str, arr[0]);
	for (int i = 1; i < n; i++) {
		if (strcmp(arr[i], arr[i - 1]) != 0) {
			voca[++cnt].cnt = 1;
			strcpy(voca[cnt].str, arr[i]);
		}
		else {
			voca[cnt].cnt++;
		}
	}
	return cnt + 1;
}

int main() {
	node* voca;
	char **str;
	int N, M, cnt = 0; 

	scanf("%d %d", &N, &M);
	voca = (node*)malloc(sizeof(node) * N);
	str = (char**)malloc(sizeof(char*) * N);

	for(int i = 0; i < N; i++) {
		str[cnt] = (char*)malloc(sizeof(char) * 11);
		scanf("%s", str[cnt]);
		if (strlen(str[cnt]) >= M)
			cnt++;
	}
	qsort(str, cnt, sizeof(char*), cmp_str);

	cnt = deduplication_Count(cnt, str, voca);
	qsort(voca, cnt, sizeof(node), cmp_voca);

	for (int i = 0; i < cnt; i++)
		printf("%s\n", voca[i].str);
	free(voca);
	return 0;
}
