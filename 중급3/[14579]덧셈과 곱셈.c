#include <stdio.h>

int main() {
	unsigned long long  a, b;
	scanf("%llu %llu", &a, &b);

	unsigned long long sum = 0, result = 1;
	for (unsigned long long i = 1; i < a; i++) {
		sum += i;
	}
	for (unsigned long long i = a; i <= b; i++) {
		sum += i;
		result *= (sum % 14579);
		result %= 14579;
	}
	printf("%llu\n", result);
}