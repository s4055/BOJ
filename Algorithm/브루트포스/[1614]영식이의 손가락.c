#include <stdio.h>

int main() {
	long long int a, b;//a : 다친 손가락(엄지부터 차례대로 1, 2, 3, 4, 5) , b : 다친 손가락을 사용할 수 있는 횟수(1000000000보다 작거나 같은 자연수 또는 0)
	scanf("%lld %lld", &a, &b);

	if (b == 0) {
		printf("%lld", a - 1);
	}
	else {
		if (a == 1) {
			printf("%lld", 8 * b);
		}
		else if (a == 5) {
			printf("%lld", 8 * b + 4);
		}
		else {//a = 2, 3, 4
			long long int k;
			if (b % 2 == 0) {
				k = b / 2;
				printf("%lld", 8 * k + (a - 1));
			}
			else {
				k = (b + 1) / 2;
				printf("%lld", 8 * k + 1 - a);
			}
		}
	}
}