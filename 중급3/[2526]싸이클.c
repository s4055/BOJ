#include <stdio.h>

int N, P, a[100000] = { 0, }, check[100] = { 0, };

int main() {
	scanf("%d %d", &N, &P);

	a[0] = N;
	for (int i = 1; i < 100000; i++) {
		a[i] = (a[i - 1] * N) % P;
		if (check[a[i]]  <= 1) {
			//printf("(1) check[a[%d]] : %d\n", i, check[a[i]]);
			check[a[i]]++;
			//printf("(2) check[a[%d]] : %d\n\n", i, check[a[i]]);
		}
	}
	
	int cnt = 0;
	for (int i = 0; i < 100; i++) {
		if (check[i] == 2) {
			cnt++;
		}
	}
	printf("%d\n", cnt);
}
