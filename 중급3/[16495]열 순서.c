#include <stdio.h>
#include <string.h>

int main() {
	char input[15] = { 0, };

	scanf("%s", &input);

	long long r = 1, sum = 0;
	for (int i = strlen(input) - 1; i >= 0; i--) {
		sum += (input[i] - 'A' + 1) * r;
		r *= 26;
	}
	printf("%lld\n", sum);
}