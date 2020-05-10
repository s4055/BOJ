#include <stdio.h>
#include <string.h>

int main() {
	char input[15] = { 0, };
	
	scanf("%s", &input);

	int flag = 0;
	for (int i = 0; i < strlen(input); i++) {
		if (input[i] == 'x') flag = 1;
	}

	if (input[0] == '-' && input[1] == 'x') {//-x
		printf("-1\n");
	}
	else if (input[0] == 'x') {//x
		printf("1\n");
	}
	else {//기타
		if (flag == 1) {
			for (int i = 0; i < strlen(input); i++) {
				if (input[i] == 'x') break;
				printf("%c", input[i]);
			}
		}
		else {
			printf("0\n");
		}
	}
}