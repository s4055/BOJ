#include <stdio.h>

int main() {
	int N, M;
	char board[105][105];

	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		scanf("%s", &board[i]);
	}

	//행
	int sum1 = 0, sum2 = 0, cnt;
	for (int i = 0; i < N; i++) {
		cnt = 0;
		for (int j = 0; j < M; j++) {
			if (board[i][j] == '-') cnt = 1;
			else sum1 += cnt, cnt = 0;
		}
		sum1 += cnt;
	}

	//열
	for (int i = 0; i < M; i++) {
		cnt = 0;
		for (int j = 0; j < N; j++) {
			if (board[j][i] == '|') cnt = 1;
			else sum2 += cnt, cnt = 0;
		}
		sum2 += cnt;
	}

	//printf("sum1 : %d\nsum2 : %d\n", sum1, sum2);
	printf("%d\n", sum1 + sum2);
}