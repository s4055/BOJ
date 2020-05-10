#include <stdio.h>
#include <string.h>

int main() {
	int num1[85] = { 0, }, num2[85] = { 0, }, check[85] = { 0, }, result[85] = { 0, };
	char input1[85] = { 0, }, input2[85] = { 0, };

	scanf("%s %s", &input1, &input2);

	int in1 = strlen(input1), in2 = strlen(input2), len = in1 > in2 ? in1 : in2;
	for (int i = in1 - 1; i >= 0; i--) {
		num1[(in1 - 1) - i] = input1[i] - '0';
	}
	for (int i = in2 - 1; i >= 0; i--) {
		num2[(in2 - 1) - i] = input2[i] - '0';
	}


	for (int i = 0; i <= len; i++) {
		int sum = num1[i] + num2[i] + check[i];
		if (sum == 0) {
			result[i] = 0;
		}
		else if (sum == 1) {
			result[i] = 1;
		}
		else if (sum == 2) {
			result[i] = 0;
			check[i + 1] = 1;
		}
		else if (sum == 3) {
			result[i] = 1;
			check[i + 1] = 1;
		}
	}

	//앞 부분의 0 제거
	int cnt = 0;
	for (int i = len; i >= 0; i--) {
		if (result[i] == 0) {
			cnt++;
		}
		else {
			break;
		}
	}

	if (cnt - 1 == len) {
		printf("0\n");
	}
	else {
		for (int i = len - cnt; i >= 0; i--) {
			printf("%d", result[i]);
		}
	}
}