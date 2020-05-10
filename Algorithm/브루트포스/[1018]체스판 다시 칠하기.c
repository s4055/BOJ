#include <stdio.h>
#define min(a, b) a > b ? b : a
int N, M, Min=3000;//8���� ũ�ų� ���� 50���� �۰ų� ���� �ڿ���
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
	//count : ���� ����� Ⱥ������ ������ ��
	//64 - count : ���� ����� �������� ������ ��(ĥ�� �� �ִ� �ִ� ������ ���� ����� Ⱥ���� ��츦 ���� ��)
	result = min(count, 64 - count);
	Min = min(Min, result);
}

void input(int x, int y) {//8 x 8�� �ؼ� Chess�� ���
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			Chess[i][j] = chess[x + i][y + j];
		}
	}
	compare();//��
}

int main() {
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		scanf("%s", &chess[i]);
	}

	//8 x 8�� ������
	for (int i = 0; i <= N - 8; i++) {
		for (int j = 0; j <= M - 8; j++) {
			input(i, j);
		}
	}
	printf("%d", Min);
}