#include <stdio.h>

int main() {
	int N, M;// N : 세로, M : 가로
	scanf("%d %d", &N, &M);

	if (N == 1) {
		printf("%d", 1);
	}
	else if (N==2) {
		if (M<=6){
			printf("%d", (M + 1) / 2);
		}
		else{
			printf("%d", 4);
		}
	}
	else if (N>=3) {
		if (M<=6){
			printf("%d", (M > 4) ? 4 : M);
		}
		else{
			printf("%d", M - 2);
		}
	}
}