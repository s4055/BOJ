#include <stdio.h>
#include <string.h>

int main() {
	int N;

	scanf("%d", &N);
	for (int i = 0; i < N + 1; i++) {
		char input[105] = { 0, };
		gets(input);

		if (i != 0) {
			int idx = 0;
			for (int j = 0; j < strlen(input); j++) {
				if (input[j] == ' ') {
					idx = j; break;
				}
			}
			//printf("(i, idx, input) : (%d, %d, %s)\n", i, idx, input);
			printf("god");
			for (int j = idx + 1; j < strlen(input); j++) {
				if (input[j] != ' ') printf("%c", input[j]);
			}
			printf("\n");
		}
	}
}