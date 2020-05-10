#include <stdio.h>

int main() {
	int N, M;
	char shape[15][15] = { 0, };

	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		scanf("%s", &shape[i]);
	}

	for (int i = 0; i < N; i++) {
		for (int j = M - 1; j >= 0; j--) {
			printf("%c", shape[i][j]);
		}
		printf("\n");
	}
}