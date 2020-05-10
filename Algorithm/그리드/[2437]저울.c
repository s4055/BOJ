#include <stdio.h>
#include <stdlib.h>

int compare(void* a,  void* b) {
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
	int N, i, min;// N : 무게 추의 수(1<=N<=1000)
	int a[1001];//무게 추를 넣는 배열 (1<=a[i]<=1000000)

	scanf("%d", &N);
	for (i = 1; i <= N; i++) {
		scanf("%d", &a[i]);
	}
	//오름차순
	qsort(a, N + 1, sizeof(int), compare);

	min = 1;
	for (i = 1; i <= N; i++) {
		if (min < a[i]) {
			break;
		}
		min += a[i];
	}
	printf("%d", min);
}