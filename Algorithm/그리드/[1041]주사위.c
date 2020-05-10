#include <stdio.h>
/*
3�� : ������ 4��
2�� : 4(N-2) + 4(N-1)
		N=2 : 4
		N=3 : 4 + 4 + 4
		N=4 : 8 + 4 + 4 + 4
		N=5 : 12 + 4 + 4 + 4 +4
1�� : (N-2)^2 + 4(N-2)(N-1)
*/
int main() {
	long long int N, sum = 0;// N<=1000000, �ڿ���
	int min = 51, max = 0, a[7];// A(1), B(2), C(3), D(4), E(5), F(6) ������ �Է� :  (A, F), (B, E), (C, D), 50���� �ڿ���
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
	r1 = (a[1] > a[6]) ? a[6] : a[1];//A, F ��
	r2 = (a[2] > a[5]) ? a[5] : a[2];//B, E ��
	r3 = (a[3] > a[4]) ? a[4] : a[3];//C, D ��
	r4 = (r2 > r3) ? r3 : r2;//B, C, D, E ��
	r5 = (r1 + r4) > (r2 + r3) ? (r2 + r3) : (r1 + r4);
	if (N == 1) {
		printf("%lld", sum - max);//�� �տ��� ���� ū ���� ����
	}
	else {
		/*
		3�� : A�� F�� ���ؼ� ������ + B�� E�� ���ؼ� ���� �� + C�� D�� ���ؼ� ������
		2�� : A�� F�� ���ؼ� ������ + B, C, D, E �� ���� �� (B+C, B+D, C+E, D+E)
		1�� : ���� ���� ��		
		*/	
		long long int result1 = (r1 + r2 + r3) * 4;
		long long int result2 = r5 * (4 * (N - 2) + 4 * (N - 1));
		long long int result3 = min * ((N - 2) * (N - 2) + 4 * (N - 2) * (N - 1));

		printf("%lld", result1+result2+result3);
	}
}