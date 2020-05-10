#include <stdio.h>
int N, M, result = 1;//N(����), M(����) 50���� �۰ų� ���� �ڿ���
char a[51][51];

void compare(int s, int i, int j) {
	//�� �������� ���ؼ� �´ٸ� ���̸� ����
	if (a[i][j] == a[i + s][j] && a[i][j] == a[i][j + s] && a[i][j] == a[i + s][j + s]) {
		result = result > (s + 1) * (s + 1) ? result : (s + 1) * (s + 1);
	}
	//printf("%d", a[i][j] == a[i + s][j]);
	//printf(" %d", a[i][j] == a[i][j + s]);
	//printf(" %d\n", a[i][j] == a[i + s][j + s]);
}

int main() {
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		scanf("%s", &a[i]);
	}
	
	for (int s = 2; s <= (N > M ? M : N); s++) {
		for (int i = 0; i <= N - s; i++) {
			for (int j = 0; j <= M - s; j++) {
				compare(s - 1, i, j);
				//printf("s : %d, i : %d, j : %d\n", s, i, j);
			}
		}
		//printf("\n\n");
	}
	printf("%d", result);
}