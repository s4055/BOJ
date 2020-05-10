#include <stdio.h>
#include <math.h>

int main() {
	double N, B, M;

	while (scanf("%lf %lf %lf", &N, &B, &M) != EOF) {
		for (int r = 1;; r++) {
			if (N * pow(1 + (B / 100), r) > M) {
				printf("%d\n", r);
				break;
			}
		}
	}
}