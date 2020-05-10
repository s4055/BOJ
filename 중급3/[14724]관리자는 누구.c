#include <stdio.h>

int main() {
	int N, team[9][100], result[9] = { 0, };

	scanf("%d", &N);
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &team[i][j]);
		}
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < N; j++) {
			if (result[i] < team[i][j]) {
				result[i] = team[i][j];
			}
		}
	}

	int max = 0, idx;
	for (int i = 0; i < 9; i++) {
		if (max < result[i]) {
			max = result[i];
			idx = i;
		}
	}

	if (idx == 0) printf("PROBRAIN\n");
	else if (idx == 1) printf("GROW\n");
	else if (idx == 2) printf("ARGOS\n");
	else if (idx == 3) printf("ADMIN\n");
	else if (idx == 4) printf("ANT\n");
	else if (idx == 5) printf("MOTION\n");
	else if (idx == 6) printf("SPG\n");
	else if (idx == 7) printf("COMON\n");
	else if (idx == 8) printf("ALMIGHTY\n");
}