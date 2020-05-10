#include <stdio.h>

int main() {
	int N; //ÀÎ¿ø ¼ö(2 ¡Â N ¡Â 50)		10 ¡Â x, y ¡Â 200
	int people[51][2], compare[51], rank[51] = { 0, };

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &people[i][0], &people[i][1]);
		compare[i] = people[i][1];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (people[i][1] < compare[j] && people[i][0] < people[j][0]) {
				rank[i]++;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		printf("%d ", rank[i] + 1);
	}
}