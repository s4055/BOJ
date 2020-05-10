#include <stdio.h>

int main() {
	int N;//1,000,000보다 작거나 같다

	scanf("%d", &N);

	int a = 1;

	//N<=4라면 그대로 출력, N>=5이면 2와 3을 이용해서 최댓값이 나오고 그때 3을 가장 많이 써야함
	while (N >= 5) {
		a *= 3;
		a %= 10007;
		N -= 3;
	}
	printf("%d", (N * a) % 10007);
}