#include <stdio.h>

int main() {
	int T, N, M;

	scanf("%d", &T);
	while (T--) {
		scanf("%d %d", &N, &M);

		long long sum = 0;
		for (int i = N; i <= M; i++) {
			int temp = i;
			while (temp != 0) {
				if (temp % 10 == 0) sum++;
				temp /= 10;
			}
		}
		if (N == 0) sum++;
		printf("%lld\n", sum);
	}
}