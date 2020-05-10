#include <stdio.h>
#include <string.h>

int max = 0;
char s[105] = { 0, };

void cal(int len, int idx) {
	int a = 0, b = 0, mid = len / 2;

	for (int i = idx; i < mid + idx; i++) {
		a += (s[i] - '0');
	}
	for (int i = mid + idx; i < len + idx; i++) {
		b += (s[i] - '0');
	}

	if (a == b && max < len) {
		max = len;
	}
}

int main() {
	scanf("%s", &s);

	for (int i = 2; i <= strlen(s); i += 2) {
		for (int j = 0; j <= strlen(s) - i; j++) {
			//printf("%d %d\n", i, j);
			cal(i, j);
		}
	}
	printf("%d\n", max);
}