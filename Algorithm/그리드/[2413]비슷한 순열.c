#include <stdio.h>

int main() {
	int n, i, j;//(3¡Ân¡Â50, 000)
	int num[50001], check[50001] = { 0, };

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}

	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (num[j] == num[i] - 1 && check[i] == 0 && check[j] == 0) {
				num[i] -= 1; num[j] += 1;
				check[i] = check[j] = 1;
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf("%d ", num[i]);
	}
}