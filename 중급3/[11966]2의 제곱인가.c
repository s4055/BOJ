#include <stdio.h>
#include <math.h>

int main() {
	int N;

	scanf("%d", &N);

	for (int i = 0; i <= 30; i++) {
		if (pow(2, i) == N) {
			printf("1\n");
			return 0;
		}
	}
	printf("0\n");
}