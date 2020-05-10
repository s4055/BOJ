#include <stdio.h>

int main() {
	int a[10] = { 0, };
	int n, k, i, j, count;
	scanf("%d", &n);
	for (i = 1; i <= n;  i++) {
		scanf("%d", &k);

		j = 0, count = 0;
		while (1) {
			if (a[j] == 0) {
				count++;
			}
			if (count == k + 1) {
				a[j] = i;
				break;
			}
			j++;
		}
	}

	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}