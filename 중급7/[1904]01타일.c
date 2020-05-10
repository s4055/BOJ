#include <stdio.h>

int N;
long long num[1000002];

int main() {
	scanf("%d", &N);

	num[1] = num[2] = 2, num[3] = 3;
	if (N < 4) {
		printf("%lld\n", num[N]);
	}
	else {
		for (int i = 4; i <= 1000000; i++) {
			num[i] = (num[i - 1] + num[i - 2]) % 15746;
			if (i == N) {
				printf("%lld\n", num[i]);
				return 0;
			}
		}
	}
}