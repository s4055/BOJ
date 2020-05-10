#include <stdio.h>

/*
1	2	2	3

1개가 참일 때
1	0	0	0	O
0	1	0	0	X
0	0	1	0	X
0	0	0	1	X

2개가 참일 때
1	1	0	0	X
1	0	1	0	X
1	0	0	1	X
0	1	1	0	O
0	1	0	1	X
0	0	1	1	X

3개가 참일 때
1	1	1	0	X
1	1	0	1	X
1	0	1	1	X
0	1	1	1	X
-> k개 맞다고 한 말일 k개 있을 때 출력
*/
int main() {
	int N;//100000보다 작거나 같은 자연수
	int a[100001] = { 0, };//a[i] : 100000보다 작거나 같은 자연수

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int k;
		scanf("%d", &k);
		a[k]++;
	}
	for (int i = N; i >= 0; i--) {
		if (a[i] == i) {
			printf("%d", i);
			return 0;
		}
	}
	printf("%d", -1);
}