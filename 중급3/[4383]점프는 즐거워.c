#include <stdio.h>

int main() {
	int n;

	while (scanf("%d", &n) != -1) {
		int  seq[3001], check[3001] = { 0, };
		for (int i = 0; i < n; i++) {
			scanf("%d", &seq[i]);
		}

		for (int i = 0; i < n - 1; i++) {
			int result = seq[i] > seq[i + 1] ? seq[i] - seq[i + 1] : seq[i + 1] - seq[i];
			check[result]++;
		}

		int cnt = 0;
		for (int i = 1; i <= n - 1; i++) {
			if (check[i] >= 1) cnt++;
		}

		if (n == 1) {
			printf("Jolly\n");
		}
		else {//n >= 2
			if (cnt == n - 1) {
				printf("Jolly\n");
			}
			else {
				printf("Not jolly\n");
			}
		}
	}
}
