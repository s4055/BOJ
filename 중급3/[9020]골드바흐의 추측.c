#include <stdio.h>

int t, n;//4 ≤ n ≤ 10,000, 짝수
int era[10001] = { 0, };//소수 판별

int main() {
	era[0] = era[1] = 1;
	for (int i = 2; i * i <= 10000; i++) {
		if (!era[i]) {
			for (int j = i * 2; j <= 10000; j+=i) {
				era[j] = 1;
			}
		}
	}
	
	scanf("%d", &t);
	while (t--) {
		int x, y, min = 10001;
		scanf("%d", &n);
		for (int i = 2; i <= n; i++) {
			if (!era[i] && !era[n - i] && n - i >= 0) {
				int p = i > n - i ? i - (n - i) : (n - i) - i;
				if (min > p) {
					min = p;
					if (i > n - i) x = n - i, y = i;
					else x = i, y = n - i;
				}
			}
		}
		printf("%d %d\n", x, y);
	}
}