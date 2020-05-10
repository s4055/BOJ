#include <stdio.h>

int main() {
	int N, M, i, j;// N : DNA의 수(1<=N<=1000, 자연수), M : 문자열의 길이(1<=M<=50, 자연수)
	int count[4][50] = { 0, };//A(0), C(1), G(2), T(3)
	char dna[1000][50];
	scanf("%d %d", &N, &M);
	for (i = 0; i < N; i++) {
		scanf("%s", &dna[i]);
	}
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			if (dna[j][i] == 'A') {
				count[0][i]++;
			}
			if (dna[j][i] == 'C') {
				count[1][i]++;
			}
			if (dna[j][i] == 'G') {
				count[2][i]++;
			}
			if (dna[j][i] == 'T') {
				count[3][i]++;
			}
		}
	}
	//최소값 및 출력
	int k, sum, Sum = 0;
	for (i = 0; i < M; i++) {
		sum = 0;
		for (j = 0; j < 4; j++) {
			if (count[j][i] > sum) {
				sum = count[j][i];
				k = j;
			}
		}
		switch(k) {//사전순으로 출력하기
		case 0:printf("%c", 'A'); break;
		case 1:printf("%c", 'C'); break;
		case 2:printf("%c", 'G'); break;
		case 3:printf("%c", 'T'); break;
		}
		Sum += (N - sum);
	}
	printf("\n%d", Sum);
}