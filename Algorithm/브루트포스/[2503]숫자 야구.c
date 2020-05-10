#include <stdio.h>
int N, count, cnt = 0;//물어본 횟수, 1이상 100이하 자연수
int num[101], strike[101], ball[101], a[3], b[3];

void compare(int i, int j) {
	int Strike = 0, Ball = 0;
	//i는 1 ~ 9로 이루어져 있고 서로 다른 세 수로 구성
	a[0] = i / 100, a[1] = (i % 100) / 10, a[2] = i % 10;
	b[0] = num[j] / 100, b[1] = (num[j] % 100) / 10, b[2] = num[j] % 10;
	if (a[1] != 0 && a[2] != 0 && a[0] != a[1] && a[0] != a[2] && a[1] != a[2]) {
		for (int s = 0; s < 3; s++) {
			for (int k = 0; k < 3; k++) {
				if (a[s] == b[k] && s == k) {
					Strike++;
				}
				if (a[s] == b[k] && s != k) {
					Ball++;
				}
			}
		}
		if (Strike == strike[j] && Ball == ball[j]) {
			count++;
		}
	}
}

int main() {
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		scanf("%d %d %d", &num[i], &strike[i], &ball[i]);
	}
	for (int i = 100; i <= 999; i++) {
		count = 0;
		for (int j = 1; j <= N; j++) {
			compare(i, j);
		}
		if (count == N) {
			cnt++;
		}
	}
	printf("%d", cnt);
}