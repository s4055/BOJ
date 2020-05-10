#include <stdio.h>

int main() {
	int N, M, K;//N : 여학생 수, M : 남학생 수, K : 인턴 참가자 수   (0 ≤ M ≤ 100), (0 ≤ N ≤ 100), (0 ≤ K ≤ M+N),
	int i, team = 0;
	scanf("%d %d %d", &N, &M, &K);
	//printf("N : %d, M : %d, K : %d\n", N, M, K);
	for (i = 1; i <= M; i++) {
		if (i * 2 <= N) {
			team++;
		}
	}
	//printf("team : %d\n", team);

	if (K > ((M + N) - team * 3)) {
		K -= ((M + N) - team * 3);
		//printf("K : %d\n", K);
		if (K % 3 == 0) {
			team -= K / 3;
			printf("(1) : %d", team);
		}
		else {
			team -= ((K / 3) + 1);
			printf("(2) : %d", team);
		}
	}
	else {
		printf("(3) : %d", team);
	}
}