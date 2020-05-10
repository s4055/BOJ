#include <stdio.h>
#define min(a, b) a > b ? b : a
int N, M, Min=3000;//8보다 크거나 같고 50보다 작거나 같은 자연수
char chess[52][52], Chess[8][8];

void compare() {
	int result, count = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((i + j) % 2 == 0 && Chess[i][j] == 'B') {
				count++;
			}
			if ((i + j) % 2 == 1 && Chess[i][j] == 'W') {
				count++;
			}
		}
	}
	//count : 왼쪽 상단이 횐색으로 시작할 때
	//64 - count : 왼쪽 상단이 검정으로 시작할 때(칠할 수 있는 최대 수에서 왼쪽 상단이 횐색인 경우를 빼면 됨)
	result = min(count, 64 - count);
	Min = min(Min, result);
}

void input(int x, int y) {//8 x 8로 해서 Chess에 담기
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			Chess[i][j] = chess[x + i][y + j];
		}
	}
	compare();//비교
}

int main() {
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		scanf("%s", &chess[i]);
	}

	//8 x 8로 나누기
	for (int i = 0; i <= N - 8; i++) {
		for (int j = 0; j <= M - 8; j++) {
			input(i, j);
		}
	}
	printf("%d", Min);
}