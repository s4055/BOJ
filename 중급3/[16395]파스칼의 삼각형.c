#include <stdio.h>

int main() {
	int n, k;
	
	scanf("%d %d", &n, &k);

	int a = n - 1, b = k - 1;
	if (a / 2 < b) {
		b = a - b;
	}
	
	long long p = 1, q = 1;
	for (int i = a; i > a - b; i--) {
		p *= i;
	}
	for (int i = 1; i <= b; i++) {
		q *= i;
	}
	printf("%lld\n", p / q);
}