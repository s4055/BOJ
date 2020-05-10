#include <stdio.h>

int main() {
	int N, C, W, max = 0;//N : ������ ����(1000���� �ڿ���), C : �ڸ� �� ��� ���(10000���� �ڿ���), W : ���� ����(10000���� �ڿ���)
	int tree[1001];

	scanf("%d %d %d", &N, &C, &W);
	for (int i = 0; i < N; i++) {
		scanf("%d", &tree[i]);
		if (tree[i] > max) {
			max = tree[i];
		}
	}
	//�־��� ����(tree[0], tree[1], tree[2].. , tree[N - 1])�� �ϳ��� ��
	int result = 0, cut, piece;
	for (int i = 1; i <= max; i++) {
		int sum = 0;
		for (int j = 0; j < N; j++) {
			cut = (tree[j] - 1) / i;
			piece = tree[j] / i;
			//������ ��찡 �����Ƿ� ���ܽ�Ű�� ����
			if ((piece * i * W) - (cut * C) > 0) {
				sum += (piece * i * W) - (cut * C);
			}
		}
		result = result > sum ? result : sum;
	}
	printf("%d", result);
}