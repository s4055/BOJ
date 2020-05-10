#include <stdio.h>
#include <stdlib.h>

int compare(const int(*a)[], const int(*b)[]) {
	int num1 = (*a)[0], num2 = (*b)[0];
	if (num1 > num2) {
		return 1;
	}
	else if (num1 < num2) {
		return -1;
	}
	else {
		return 0;
	}
}

int main() {
	int T, n;//T : �׽�Ʈ ���̽� ��, n : �������� ����(1 �� n �� 5000)
	int LW[5001][2] = { 0, };//L : ����, W : ���� (L, W�� 10000���� �ʴ� ����)

	scanf("%d", &T);
	while (T--) {
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%d %d", &LW[i][0], &LW[i][1]);
		}
		qsort(LW, n, 2 * sizeof(int), compare);//��������

		int check[5001] = { 0, }, count = 0;
		for (int i = 0; i < n; i++) {
			if (check[i] == 0) {
				check[i] = 1;
				int t = LW[i][1];
				for (int j = i + 1; j < n; j++) {
					if (t <= LW[j][1] && check[j] == 0) {
						t = LW[j][1];
						check[j] = 1;
					}
				}
			count++;
			}
		}
		printf("%d\n", count);
	}
}