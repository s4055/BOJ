#include <stdio.h>

int main() {
	int N;//1000보다 작거나 같은 자연수
	scanf("%d", &N);

	if (N >= 1 && N <= 99) {//한자리수와 두자리수로 만들 수 있는 한수 갯수
		printf("%d", N);
	}
	int count = 0;
	if (N >= 100 && N <= 1000) {//세자리수의 한수 갯수
		int a, b, c;
		for (int i = 100; i <= N; i++) {
			a = i / 100; b = (i % 100) / 10; c = (i % 100) % 10;
			if (b - a == c - b) {
				count++;
			}
		}
		printf("%d", count + 99);
	}
}