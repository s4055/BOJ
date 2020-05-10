#include <stdio.h>
#include <math.h>

int main() {
	unsigned long long n, result;
	scanf("%llu", &n);

	result = sqrt(n);
	if (pow(result, 2) < n) {
		printf("%llu\n", result + 1);
	}
	else {
		printf("%llu\n", result);
	}
}
