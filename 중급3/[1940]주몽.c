#include <stdio.h>

int main() {
	int N, M, a[15001], check[15001] = { 0, };

	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}

	int cnt = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i != j && check[i] == 0 && check[j] == 0 && a[i] + a[j] == M) {
				//printf("a[%d] : %d, a[%d] : %d\n", i, a[i], j, a[j]);
				check[i] = 1, check[j] = 1;
				cnt++;
			}
		}
	}
	printf("%d\n", cnt);
}
