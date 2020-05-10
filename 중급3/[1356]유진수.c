#include <stdio.h>
#include<string.h>

int main() {
	char input[12] = { 0, };
	scanf("%s", &input);

	int len = strlen(input);

	long long front, back;
	for (int i = 0; i < len - 1; i++) {
		front = 1, back = 1;
		for (int j = 0; j <= i; j++) {
			front *= (input[j] - '0');
			//printf("j : %c\n", input[j]);
		}
		for (int k = i + 1; k < len; k++) {
			back *= (input[k] - '0');
			//printf("k : %c\n", input[k]);
		}
		//printf("front : %lld, back : %lld\n\n", front, back);

		if (front == back) {
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");
}
