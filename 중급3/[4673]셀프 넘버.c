#include <stdio.h>

int era[10001] = { 0, };

int main() {
	for (int i = 1; i <= 10001; i++) {
		int k = i, sum = i;
		while (k != 0) {
			sum += k % 10;
			k /= 10;
		}
		era[sum] = 1;
	}
	for (int i = 1; i <= 10000; i++) {
		if (!era[i]) {
			printf("%d\n", i);
		}
	}
}