#include <stdio.h>

int main() {
	//N : ���� ��(2 �� N �� 10), S : ī���� �ջ�� ���� ��, R : ī���� �ϳ� �� ������ ���� ��(1 �� S, R �� N)
	//d : �ջ�� ���� ��ȣ, a : ������ �ִ� ���� ��ȣ
	int N, S, R, d, a, i, count = 0;
	int team[11] = { 1,1,1,1,1,1,1,1,1,1,1 };
	scanf("%d %d %d", &N, &S, &R);
	for (i = 0; i < S; i++) {
		scanf("%d", &d);
		team[d] = 0;
	}
	for (i = 0; i < R; i++) {
		scanf("%d", &a);
		team[a] += 1;
	}
	/*printf("\n---------------------------------------------\n");
	for (i = 1; i <= N; i++) {
		printf("%d : %d\n", i, team[i]);
	}
	printf("\n---------------------------------------------\n");*/
	for (i = 1; i <= N; i++) {
		if (team[i] == 2 && team[i - 1]==0) {
			team[i - 1] = 1;
			team[i] = 1;
		}
		if (team[i] == 2 && team[i + 1] == 0) {
			team[i + 1] = 1;
			team[i] = 1;
		}
	}
	/*printf("\n---------------------------------------------\n");
	for (i = 1; i <= N; i++) {
		printf("%d : %d\n", i, team[i]);
	}
	printf("\n---------------------------------------------\n");*/
	for (i = 1; i <= N; i++) {
		if (team[i] == 0) {
			count++;
		}
	}
	printf("%d", count);
}