#include <stdio.h>

int main() {
	int era[100001] = { 0, };
	era[0] = era[1] = 1;
	for (int i = 2; i <= 100000; i++) {
		if (!era[i]) {
			for (int j = i * 2; j <= 100000; j += i) {// j = i의 배수
				for (int k = j; k % i == 0; k /= i) era[j]++;// era[j] : j를 소인수분해했을 때 소수의 갯수
			}
		}
	}

	int a, b, cnt = 0;
	scanf("%d %d", &a, &b);

	for (int i = a; i <= b; i++) {
		if (era[era[i]] == 0) cnt++;
	}
	printf("%d\n", cnt);
}