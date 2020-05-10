#include <stdio.h>
/*
3면 : 무조건 4개
2면 : 4(N-2) + 4(N-1)
		N=2 : 4
		N=3 : 4 + 4 + 4
		N=4 : 8 + 4 + 4 + 4
		N=5 : 12 + 4 + 4 + 4 +4
1면 : (N-2)^2 + 4(N-2)(N-1)
*/
int main() {
	long long int N, sum = 0;// N<=1000000, 자연수
	int min = 51, max = 0, a[7];// A(1), B(2), C(3), D(4), E(5), F(6) 순으로 입력 :  (A, F), (B, E), (C, D), 50이하 자연수
	scanf("%lld", &N);
	for (int i = 1; i <= 6; i++) {
		scanf("%d", &a[i]);
		sum += a[i];
		if (a[i] > max) {
			max = a[i];
		}
		if (a[i] < min) {
			min = a[i];
		}
	}

	int r1, r2, r3, r4, r5;
	r1 = (a[1] > a[6]) ? a[6] : a[1];//A, F 비교
	r2 = (a[2] > a[5]) ? a[5] : a[2];//B, E 비교
	r3 = (a[3] > a[4]) ? a[4] : a[3];//C, D 비교
	r4 = (r2 > r3) ? r3 : r2;//B, C, D, E 비교
	r5 = (r1 + r4) > (r2 + r3) ? (r2 + r3) : (r1 + r4);
	if (N == 1) {
		printf("%lld", sum - max);//총 합에서 가장 큰 값을 뺀다
	}
	else {
		/*
		3면 : A와 F를 비교해서 작은것 + B와 E를 비교해서 작은 것 + C와 D를 비교해서 작은것
		2면 : A와 F를 비교해서 작은것 + B, C, D, E 중 작은 것 (B+C, B+D, C+E, D+E)
		1면 : 가장 작은 값		
		*/	
		long long int result1 = (r1 + r2 + r3) * 4;
		long long int result2 = r5 * (4 * (N - 2) + 4 * (N - 1));
		long long int result3 = min * ((N - 2) * (N - 2) + 4 * (N - 2) * (N - 1));

		printf("%lld", result1+result2+result3);
	}
}