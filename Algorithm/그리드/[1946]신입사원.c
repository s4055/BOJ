#include <stdio.h>

int main() {
	int a[100001], b[100001], p[21];// a : ���� ���, b : ���� ���, p : ���� �ο���
	int T, N, i, j, k, count;// T : �׽�Ʈ ��(1 �� T �� 20), N : ������ ��(1 �� N �� 100,000)
	scanf("%d", &T);

	for (k = 1; k <= T; k++) {
		scanf("%d", &N);
		count = 0;
		for (i = 1; i <= N; i++) {
			scanf("%d %d", &a[i], &b[i]);
		}
		for (i = 1; i <= N; i++) {
			for (j = 1; j <= N; j++) {
				if (a[i] > a[j] && b[i] > b[j]) {
					count++;
					break;
				}
			}
		}
		p[k] = N - count;
	}
	for (i = 1; i <= T; i++) {
		printf("%d\n", p[i]);
	}
}