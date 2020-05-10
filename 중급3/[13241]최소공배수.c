#include <stdio.h>

long long int gcd(long long int a, long long int b) {
	while (b > 0) {
		long long int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int main() {
	long long int a, b;

	scanf("%lld %lld", &a, &b);

	printf("%lld\n", (a * b) / gcd(a, b));
}