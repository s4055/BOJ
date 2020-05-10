#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	char input1[35] = { 0, }, input2[35] = { 0, };

	scanf("%s %s", &input1, &input2);

	long long temp, sum1 = 0, sum2 = 0;
	for (int i = 0; i < strlen(input1); i++) {
		temp = pow(2, strlen(input1) - 1 - i) * (input1[i] - '0');
		sum1 += temp;
	}
	for (int i = 0; i < strlen(input2); i++) {
		temp = pow(2, strlen(input2) - 1 - i) * (input2[i] - '0');
		sum2 += temp;
	}

	//printf("%lld %lld\n", sum1, sum2);
	long long result = sum1 * sum2;
	int k[50] = { 0, }, cnt = 0;
	//printf("%lld\n\n", result);

	while (result != 0) {
		//printf("(result, 나머지, 몫) : (%lld, %lld, %lld)\n", result, result % 2, result / 2);
		k[cnt++] = result % 2;
		result /= 2;
	}
	for (int i = cnt - 1; i >= 0; i--) {
		printf("%d", k[i]);
	}
}