#include <stdio.h>

int N, M, num, sum[100001] = { 0, };

int main() {
	scanf("%d %d", &N, &M);
	for (int i = 1; i <= N; i++) {
		scanf("%d", &num);
		sum[i] = sum[i - 1] + num;
	}

	int start, end;
	while (M--) {
		scanf("%d %d", &start, &end);

		if (start == 0) printf("%d\n", sum[end]);
		else printf("%d\n", sum[end] - sum[start - 1]);
	}
}