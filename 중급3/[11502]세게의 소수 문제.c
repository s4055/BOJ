#include <stdio.h>

int main() {
	int era[1001] = { 0, };
	era[0] = era[1] = 1;
	for (int i = 2; i * i <= 1000; i++) {
		if (era[i] == 0) {
			for (int j = 2 * i; j <= 1000; j += i) {
				era[j] = 1;
			}
		}
	}

	int T, K;
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &K);

		int flag = 1;
		for (int i = 2; i <= 1000 && flag == 1; i++) {
			for (int j = i; j <= 1000 && flag == 1; j++) {
				for (int r = j; r <= 1000 && flag == 1; r++) {
					if (era[i] == 0 && era[j] == 0 && era[r] == 0 && i + j + r == K && flag == 1) {
						printf("%d %d %d\n", i, j, r);
						flag = 0;
					}
				}
			}
		}
	}
}