#include <stdio.h>

int main() {
	char a[51], b[51];
	int i, j, count = 0, min = 100;
	scanf("%s %s", &a, &b);

	for (i = 0; i < (strlen(b) - strlen(a)) + 1; i++) {
		for (j = i; j < strlen(a) + i; j++) {
			if (a[j - i] != b[j]) {
				count++;
			}
		}
		if (min > count) {
			min = count;
		}
		count = 0;
	}
	printf("%d", min);
}