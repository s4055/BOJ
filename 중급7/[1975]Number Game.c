#include <stdio.h>

int main() {
	int t, N;

	scanf("%d", &t);
	while (t--) {
		scanf("%d", &N);
		
		int b = 2, sum = 0;
		while (b <= N + 1) {
			int temp = N;
			while (temp != 0) {
				if (temp % b == 0) sum++;
				else break;
				temp /= b;
			}
			//printf("%d\n", b);
			b++;
		}
		printf("%d\n", sum);
	}
}