#include <stdio.h>

int main() {
	int input, cnt = 0;

	while (scanf("%d", &input) != EOF) {
		if (input > 0) cnt++;
	}
	printf("%d\n", cnt);
}