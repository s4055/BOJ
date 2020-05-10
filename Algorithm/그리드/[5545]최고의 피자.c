#include <stdio.h>

/*최고의 피자 : 피자 열량/피자 가격
도우 가격 : A
토핑 가격 : B
피자 가격 : A+B*k (k는 토핑 종류)
피자 열량 :  도우 열량 + 토핑 열량

<입력>
토핑 종류 N(1<=N<=100)
도우 가격	(A)	토핑 가격(B) (1<=A, B<=1000)
도우 열량(C)(1<=C<=10000)
토핑1	(1<=D<=10000)
토핑2
.....

<추론>
토핑 종류는 적게, 토핑 열량은 높게
*/

int main() {
	int N, A, B, C, D[10000] = { 0, }, i, j, temp, sum = 0;// N : 토핑 종류, A : 도우 가격,  B : 토핑 가격, C : 도우 열량
	float p, max = -1;
	scanf("%d", &N);//토핑 종류
	scanf("%d %d", &A, &B);//도우 가격, 토핑 가격
	scanf("%d", &C);//도우 열량
	
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