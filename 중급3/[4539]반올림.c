#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);

	while (n--) {
		double x;
		scanf("%lf", &x);
		for (int i = 10; i <= 10000000; i *= 10) {
			if (x > i) {
				x = round(x / i) * i;
			}
		}
		printf("%0.lf\n", x);
	}
}