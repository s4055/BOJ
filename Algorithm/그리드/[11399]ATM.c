#include <stdio.h>

//첫째 줄에 사람의 수 N(1 ≤ N ≤ 1,000)이 주어진다. 둘째 줄에는 각 사람이 돈을 인출하는데 걸리는 시간 Pi가 주어진다. (1 ≤ Pi ≤ 1,000)

int main() {
	int n, i, j, temp, Sum = 0;
	int p[1000], sum[1000] = { 0, };
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &p[i]);
	}
	for (i = 0; i < n; i++) {
		for(j = i; j < n; j++) {
			if (p[i] > p[j]) {
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j <= i; j++) {
			sum[i] += p[j];
		}
	}

	for (i = 0; i < n; i++) {
		Sum += sum[i];
	}
	printf("%d", Sum);
}