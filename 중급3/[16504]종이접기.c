#include <stdio.h>

long long N, sum = 0, num[1100][1100];

int main() {
	scanf("%lld", &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%lld", &num[i][j]);
			sum += num[i][j];
		}
	}
	printf("%lld\n", sum);
}