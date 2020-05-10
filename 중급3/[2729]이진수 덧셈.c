#include <stdio.h>
#include <string.h>

int main() {
	int test;
	
	scanf("%d", &test);
	while (test--) {
		int input[85][2] = { 0, }, check[85] = { 0, }, result[85] = { 0, };
		char a[85] = { 0, }, b[85] = { 0, };

		scanf("%s %s", &a, &b);

		for (int i = 0; i < strlen(a); i++) {
			input[i][0] = a[(strlen(a) - 1) - i] - '0';
		}
		for (int i = 0; i < strlen(b); i++) {
			input[i][1] = b[(strlen(b) - 1) - i] - '0';
		}

		int len = strlen(a) > strlen(b) ? strlen(a) : strlen(b);
		for (int i = 0; i <= len; i++) {
			int sum = input[i][0] + input[i][1] + check[i];
			if (sum == 0) result[i] = 0;
			else if (sum == 1) result[i] = 1;
			else if (sum == 2) result[i] = 0, check[i + 1] = 1;
			else if (sum == 3) result[i] = 1, check[i + 1] = 1;
		}

		int cnt = 0;
		for (int i = len; i >= 0; i--) {
			if (result[i] == 0) cnt++;
			else break;
		}

		if (cnt - 1 == len) {
			printf("0\n");
		}
		else {
			for (int i = len - cnt; i >= 0; i--) {
				printf("%d", result[i]);
			}
			printf("\n");
		}
	}
}