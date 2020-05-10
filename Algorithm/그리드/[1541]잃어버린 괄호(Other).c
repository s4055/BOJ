#include <stdio.h>

int main() {
	int i = 0, n, a;
	char c;

	for (scanf("%d", &n); scanf("%c", &c), c != 10;) {// c!=10 (10은 아스키코드로 0001010 -> Line Feed -> 다음 줄로 이동)
		if (c == '-') {
			i = 1;
		}
		scanf("%d", &a);
		if (i) {
			n -= a;
		}
		else {
			n += a;
		}
	}
	printf("%d", n);
}