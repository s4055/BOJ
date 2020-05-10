#include <stdio.h>

int main() {
	int N, xy[8][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, -1}, {1, 1}, {-1, 1}, {-1, -1} };
	char map[1002][1002];

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s", &map[i]);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if ('1' <= map[i][j] && map[i][j] <= '9') {
				printf("*");
			}
			else {
				int x, y, sum = 0;
				for (int a = 0; a < 8; a++) {
					x = i + xy[a][0], y = j + xy[a][1];
					if (0 <= x && x < N && 0 <= y && y < N && '1' <= map[x][y] && map[x][y] <= '9') {
						sum += (map[x][y] - '0');
					}
				}
				if (sum >= 10) printf("M");
				else printf("%d", sum);
			}
		}
		printf("\n");
	}
}