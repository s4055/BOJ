#include <stdio.h>

//ù° �ٿ� N�� K�� �־�����. (1 �� N �� 10, 1 �� K �� 100,000,000)

int main() {
	int n, k, i, count = 0;
	int a[10];
	scanf("%d %d", &n, &k);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = n - 1; i >= 0; i--) {
		count += k / a[i];
		k %= a[i];
	}
	printf("%d", count);
}