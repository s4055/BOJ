#include <stdio.h>

int main() {
	int cnt = 0;
	char input;
	while (scanf("%c", &input) != -1) {
		if(input=='\n') cnt++;
	}
	printf("%d\n", cnt);
}