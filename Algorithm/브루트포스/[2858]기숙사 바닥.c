#include <stdio.h>

int main() {
	int R, B;//R : ������ Ÿ�� ��(8 �� R �� 5000), B : ���� Ÿ�� ��(1 �� B �� 2, 000, 000)
	scanf("%d %d", &R, &B);
	int a = 1, b;
	while (1) {
		if (B % a == 0) {
			b = B / a;
			if (2 * a + 2 * b == R - 4) {
				if (a > b) {
					printf("%d %d", a + 2, b + 2);
					return 0;
				}
				else {
					printf("%d %d", b + 2, a + 2);
					return 0;
				}
			}
		}
		a++;
	}
}