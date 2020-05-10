#include <stdio.h>

int go(int i, int num) {
	int sum = 0;
	while (i != 0) {
		sum += i % num;
		i /= num;
	}
	return sum;
}

int main() {
	for (int i = 1000; i <= 9999; i++) {
		if (go(i, 10) == go(i, 12) && go(i, 12) == go(i, 16)) {
			printf("%d\n", i);
		}
	}
}