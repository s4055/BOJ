#include <stdio.h>
#include <string.h>

int main() {
	char input[25] = { 0, };

	scanf("%s", &input);

	int flag = 1;
	for (int i = 0; i < strlen(input); i++) {
		if (input[i] != input[(strlen(input) - 1) - i]) flag = 0;
	}

	if (flag == 1) printf("true\n");
	else printf("false\n");
}