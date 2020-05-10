#include <stdio.h>

int main() {
	int N, M, K;

	scanf("%d %d %d", &N, &M, &K);
	/*
	M < K : M
	M = K : K
	M > K : K

	N - M = t
	t < N - K : t
	t = N - K : t
	t > N - K : N - K
	*/

	int sum = 0;
	if (M < K) sum += M;
	else sum += K;

	if (N - M <= N - K) sum += (N - M);
	else sum += (N - K);

	printf("%d\n", sum);
}