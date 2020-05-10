#include <stdio.h>
#define MAX 1005000 + 1

int era[MAX] = { 0, };

int main() {
	era[0] = era[1] = 1;
	for (int i = 2; i * i < MAX; i++) {
		if (!era[i]) {
			for (int j = i * 2; j < MAX; j += i) {
				era[j] = 1;
			}
		}
	}

	int N;
	scanf("%d", &N);

	for (int i = N; i < MAX; i++) {
		if (!era[i]) {
			int temp = i, r = 1, sum = 0;

			while (temp > r) {
				r *= 10;
			}
			r /= 10;

			while (temp != 0) {
				sum += (temp % 10) * r;
				r /= 10, temp /= 10;
			}
            
			if (i == sum) {
				printf("%d\n", i);
				return 0;
			}
		}
	}
}