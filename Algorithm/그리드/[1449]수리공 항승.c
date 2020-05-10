#include <stdio.h>
#include <stdlib.h>

int compare(void* a, void* b) {
	int num1 = *(int*)a;
	int num2 = *(int*)b;
	if (num1 > num2) {
		return 1;
	}
	else if (num1 < num2) {
		return -1;
	}
	else {
		return 0;
	}
}

int main() {
	int N, L, i, j, k, count;// N : 물이 새는 갯수, L : 테이프 길이 (1<=N<=1000, 1<=L<=1000, 자연수)
	int W[1001];//물이 세는 곳 좌표 저장배열
	double x;

	scanf("%d %d", &N, &L);
	for (i = 1; i <= N; i++) {
		scanf("%d", &W[i]);
	}

	//오름차순
	qsort(W, N + 1, sizeof(int), compare);

	count = 0; k = 0;
	x = W[1] - 0.5;
	while (k!=N) {
		for (i = 1; i <= N; i++) {
			if (x < W[i] && x + L > W[i]) {
				k++;
				j = i;
			}
		}
		x = W[j + 1] - 0.5;
		count++;
	}
	printf("%d", count);
}