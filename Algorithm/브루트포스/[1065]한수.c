#include <stdio.h>

int main() {
	int N;//1000���� �۰ų� ���� �ڿ���
	scanf("%d", &N);

	if (N >= 1 && N <= 99) {//���ڸ����� ���ڸ����� ���� �� �ִ� �Ѽ� ����
		printf("%d", N);
	}
	int count = 0;
	if (N >= 100 && N <= 1000) {//���ڸ����� �Ѽ� ����
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