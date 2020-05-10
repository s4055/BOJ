#include <stdio.h>

int main() {
	int N, C, W, max = 0;//N : 나무의 개수(1000이하 자연수), C : 자를 때 드는 비용(10000이하 자연수), W : 나무 가격(10000이하 자연수)
	int tree[1001];

	scanf("%d %d %d", &N, &C, &W);
	for (int i = 0; i < N; i++) {
		scanf("%d", &tree[i]);
		if (tree[i] > max) {
			max = tree[i];
		}
	}
	//주어진 나무(tree[0], tree[1], tree[2].. , tree[N - 1])를 하나씩 비교
	int result = 0, cut, piece;
	for (int i = 1; i <= max; i++) {
		int sum = 0;
		for (int j = 0; j < N; j++) {
			cut = (tree[j] - 1) / i;
			piece = tree[j] / i;
			//음수일 경우가 있으므로 제외시키기 위해
			if ((piece * i * W) - (cut * C) > 0) {
				sum += (piece * i * W) - (cut * C);
			}
		}
		result = result > sum ? result : sum;
	}
	printf("%d", result);
}