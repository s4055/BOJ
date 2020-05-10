#include <stdio.h>

int main() {
	int map1[6][6], map2[6][6], check[6][6] = { 0, };

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &map1[i][j]);
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &map2[i][j]);
		}
	}

	int cnt = 0;
	for (int a = 0; a < 5; a++) {
		for (int b = 0; b < 5; b++) {
			int bingo[15] = { 0, };

			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < 5; j++) {
					if (map1[i][j] == map2[a][b] && check[i][j] == 0) {
						check[i][j] = 1;
						cnt++;
					}
				}
			}

			//가로
			for (int a = 0; a < 5; a++) {
				for (int b = 0; b < 5; b++) {
					if (a == 0 && check[a][b] == 1) bingo[0]++;
					else if (a == 1 && check[a][b] == 1) bingo[1]++;
					else if (a == 2 && check[a][b] == 1) bingo[2]++;
					else if (a == 3 && check[a][b] == 1) bingo[3]++;
					else if (a == 4 && check[a][b] == 1) bingo[4]++;
				}
			}
			//세로
			for (int a = 0; a < 5; a++) {
				for (int b = 0; b < 5; b++) {
					if (a == 0 && check[b][a] == 1) bingo[5]++;
					else if (a == 1 && check[b][a] == 1) bingo[6]++;
					else if (a == 2 && check[b][a] == 1) bingo[7]++;
					else if (a == 3 && check[b][a] == 1) bingo[8]++;
					else if (a == 4 && check[b][a] == 1) bingo[9]++;
				}
			}
			//대각선
			for (int a = 0; a < 5; a++) {
				if (check[a][a] == 1) bingo[10]++;
				if (check[a][4 - a] == 1) bingo[11]++;
			}

			int bingo_cnt = 0;
			for (int i = 0; i < 12; i++) {
				if (bingo[i] == 5) {
					bingo_cnt++;
				}
				if (bingo_cnt == 3) {
					printf("%d\n", cnt);
					return 0;
				}
			}
		}
	}
}
