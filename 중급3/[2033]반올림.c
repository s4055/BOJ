#include <stdio.h>
#include <math.h>

int main() {
	double N;
	scanf("%lf", &N);

	double result = N;
	for (int i = 10; i <= 10000000; i *= 10) {
		if (result > i) {
			result = round(result / i) * i;
			//printf("%0.lf\n", result);
		}
	}
	printf("%0.lf\n", result);
}