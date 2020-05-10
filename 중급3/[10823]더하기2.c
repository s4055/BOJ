#include <stdio.h>

int main() {
	char input;
	long long sum = 0;
	int num = 0;

	while ((input = getchar()) != EOF) {
		if (input == '\n') {
			continue;
		}
		else if (input == ',') {
			sum += num;
			num = 0;
		}
		else {
			num *= 10;
			num += input - '0';
		}
	}
	printf("%lld", sum + num);
}