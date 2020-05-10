#include <stdio.h>

int main() {
	int N, K;
	int era[100001] = { 0, };
	scanf("%d %d", &N, &K);

	for (int i = 2; i <= N; i++) {
		if (!era[i]) {
			for (int j = i * 2; j <= N; j += i) {
				if (j % i == 0 && era[j] < i) {
					era[j] = i;
				}
			}
		}
	}

	for (int i = 1; i <= N; i++) {
		if (!era[i]) era[i] = i;
	}

	/*for (int i = 1; i <= N; i++) {
		printf("era[%d] : %d\n", i, era[i]);
	}*/

	int cnt = 0;
	for (int i = 1; i <= N; i++) {
		if (era[i] <= K) cnt++;
	}
	printf("%d\n", cnt);
}