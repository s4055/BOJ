#include <stdio.h>

/*�ְ��� ���� : ���� ����/���� ����
���� ���� : A
���� ���� : B
���� ���� : A+B*k (k�� ���� ����)
���� ���� :  ���� ���� + ���� ����

<�Է�>
���� ���� N(1<=N<=100)
���� ����	(A)	���� ����(B) (1<=A, B<=1000)
���� ����(C)(1<=C<=10000)
����1	(1<=D<=10000)
����2
.....

<�߷�>
���� ������ ����, ���� ������ ����
*/

int main() {
	int N, A, B, C, D[10000] = { 0, }, i, j, temp, sum = 0;// N : ���� ����, A : ���� ����,  B : ���� ����, C : ���� ����
	float p, max = -1;
	scanf("%d", &N);//���� ����
	scanf("%d %d", &A, &B);//���� ����, ���� ����
	scanf("%d", &C);//���� ����
	
	for (i = 0; i < N; i++) {
		scanf("%d", &D[i]);
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if (D[i] > D[j]) {
				temp = D[i];
				D[i] = D[j];
				D[j] = temp;
			}
		}
	}

	for (i = 0; i < N; i++) {
		sum += D[i];
		p = (float)(C + sum) / (float)(A + B * (i + 1));
		if (max < p) {
			max = p;
		}
		if (max < ((float)C / (float)A)) {
			max = (float)C / (float)A;
		}
	}
	printf("%d", (int)max);
}