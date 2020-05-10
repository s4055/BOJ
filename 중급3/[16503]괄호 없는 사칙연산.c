#include <stdio.h>
#include <string.h>

int cal(int a, int b, char c) {
	if (c == '+') return a + b;
	else if (c == '-') return a - b;
	else if (c == '*') return a * b;
	else if (c == '/') return a / b;
}

int main() {
	int num[3] = { 0, }, o[2] = { 0, };
	char input[20] = { 0, };

	scanf("%[^\n]", &input);

	int r = 1, idx = 2, o_idx = 1;
	for (int i = strlen(input) - 1; i >= 0; i--) {
		if (input[i] != '+' && input[i] != '-' && input[i] != '*' && input[i] != '/' && input[i] != ' ') {
			num[idx] += (input[i] - '0') * r;
			r *= 10;
		}
		else if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/') {
			idx--, r = 1;
			o[o_idx--] = i;
		}
	}

	int result1, result2, temp;
	//앞 : (k1 o1 k2) o2 k3
	temp = cal(num[0], num[1], input[o[0]]);
	result1 = cal(temp, num[2], input[o[1]]);

	//뒤 : k1 o1 (k2 o2 k3)
	temp = cal(num[1], num[2], input[o[1]]);
	result2 = cal(num[0], temp, input[o[0]]);

	if (result1 < result2) printf("%d\n%d\n", result1, result2);
	else printf("%d\n%d\n", result2, result1);
}