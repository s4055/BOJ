#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);

	int result = 0, sum = m;
	while (n--) {
		int in, out;
		scanf("%d %d", &in, &out);

		sum += (in - out);
		if (sum < 0) {
			printf("0\n");
			return 0;
		}
		result = result > sum ? result : sum;
	}
	printf("%d\n", result);
}