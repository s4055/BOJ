#include <stdio.h>
#include <string.h>

int main() {
	int N;
	char seat[55] = { 0, };

	scanf("%d %s", &N, &seat);

	int S = 0, L;
	for (int i = 0; i < strlen(seat); i++) {
		if (seat[i] == 'S') S++;
	}
	L = (N - S) / 2;
	//S+L+1 : 컵 홀더의 갯수
	if (N < S + L + 1) {
		printf("%d\n", N);
	}
	else {
		printf("%d\n", S + L + 1);
	}
}