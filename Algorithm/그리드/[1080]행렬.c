#include <stdio.h>

int main() {
	int N, M, i, j, x, y, count = 0;// N : За, M : ї­
	char A[51][51], B[51][51];
	scanf("%d %d", &N, &M);
	for (i = 0; i < N; i++) {
		scanf("%s", &A[i]);
	}
	for (i = 0; i < N; i++) {
		scanf("%s", &B[i]);
	}
	for (i = 0; i < N - 2; i++) {
		for (j = 0; j < M - 2; j++) {
			if (A[i][j] == B[i][j]) {
				continue;
			}
			else {
				for (x = i; x < i + 3; x++) {
					for (y = j; y < j + 3; y++) {
						if (A[x][y] == '0') {
							A[x][y] = '1';
						}
						else {
							A[x][y] = '0';
						}
					}
				}
				count++;
			}
		}
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			if (A[i][j] != B[i][j]) {
				printf("%d", -1);
				return 0;
			}
		}
	}
	printf("%d", count);
}