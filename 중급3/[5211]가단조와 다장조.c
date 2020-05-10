#include <stdio.h>
#include <string.h>

//가단조A, D, E이고, 다장조 C, F, G
int main() {
	int index[105] = { 0, };
	char input[105] = { 0, };
	scanf("%s", &input);

	int cnt = 0;
	for (int i = 0; i < strlen(input); i++) {
		if (input[i] == '|') index[cnt++] = i;
	}

	int Ga = 0, Da = 0;
	if (input[0] == 'A' || input[0] == 'D' || input[0] == 'E') Ga++;
	else if (input[0] == 'C' || input[0] == 'F' || input[0] == 'G') Da++;
	for (int i = 0; i < cnt; i++) {
		if (input[index[i] + 1] == 'A' || input[index[i] + 1] == 'D' || input[index[i] + 1] == 'E') Ga++;
		else if (input[index[i] + 1] == 'C' || input[index[i] + 1] == 'F' || input[index[i] + 1] == 'G') Da++;
	}

	if (Ga > Da) {
		printf("A-minor\n");
	}
	else if (Ga < Da) {
		printf("C-major\n");
	}
	else {
		if (input[strlen(input) - 1] == 'A' || input[strlen(input) - 1] == 'D' || input[strlen(input) - 1] == 'E') printf("A-minor\n");
		else if (input[strlen(input) - 1] == 'C' || input[strlen(input) - 1] == 'F' || input[strlen(input) - 1] == 'G') printf("C-major\n");
	}
}
