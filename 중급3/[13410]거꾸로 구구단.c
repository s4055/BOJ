#include <stdio.h>

int main() {
	int N, K, max = 0;

	scanf("%d %d", &N, &K);
	for (int i = 1; i <= K; i++) {
		int r = 1;
		while (r <= N * i) {
			r *= 10;
		}
		r /= 10;
		int temp = N * i, sum = 0;
		while (temp != 0) {
			//printf("(1) temp : %d, r : %d\n", temp, r);
			sum += (temp % 10) * r;
			temp /= 10, r /= 10;
			//printf("(2) temp : %d, r : %d\n\n", temp, r);
		}
		//printf("(N, i, N * i, sum) : (%d, %d, %d, %d)\n", N, i, N * i, sum);
		if (max < sum) {
			max = sum;
		}
	}
	printf("%d\n", max);
}