#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare1(const void* a, const void* b) {//오름차순
	return (strcmp((char*)a, (char*)b));
}

int compare2(const void* a, const void* b) {//내림차순
	return (strcmp((char*)a, (char*)b)) * -1;
}

int main() {
	int N;
	char name[25][15] = { 0, }, increasing[25][15] = { 0, }, decreasing[25][15] = { 0, };
	
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s", &name[i]);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < strlen(name[i]); j++) {
			increasing[i][j] = name[i][j];
			decreasing[i][j] = name[i][j];
		}
	}

	qsort(increasing, N, sizeof(increasing[0]), compare1);//오름차순
	qsort(decreasing, N, sizeof(decreasing[0]), compare2);//내림차순

	int in = 1, de = 1;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < strlen(name[i]); j++) {
			if (name[i][j] != increasing[i][j]) in = 0;
			if (name[i][j] != decreasing[i][j]) de = 0;
		}
	}

	if (in == 0 && de == 0) printf("NEITHER\n");
	else if (in == 1 && de == 0) printf("INCREASING\n");
	else if (in == 0 && de == 1) printf("DECREASING\n");
}