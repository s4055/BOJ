#include <stdio.h>
#include <stdlib.h>

int compare(const int(*arr1)[], const int(*arr2)[]) {
	int num1 = (*arr1)[2], num2 = (*arr2)[2];
	if (num1 < num2) return 1;
	else if (num1 > num2) return -1;
	else return 0;
}

int main() {
	int N, a[1001][3], check[1001] = { 0, };

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
	}

	qsort(a, N, sizeof(int) * 3, compare);//내림차순
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		if (check[a[i][0]] <= 1 && cnt != 3) {
			check[a[i][0]]++;
			cnt++;
			printf("%d %d\n", a[i][0], a[i][1]);
		}
	}
}
