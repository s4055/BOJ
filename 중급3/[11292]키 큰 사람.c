#include <stdio.h>

int main() {
	int N;
	double height[51], max;
	char name[51][12];

	while (1) {
		scanf("%d", &N);
		if (N == 0) break;

		max = 0;
		for (int i = 0; i < N; i++) {
			scanf("%s %lf", &name[i], &height[i]);
			if (max < height[i]) max = height[i];
		}

		for (int i = 0; i < N; i++) {
			if (max == height[i]) {
				printf("%s ", name[i]);
			}
		}
		printf("\n");
	}
}