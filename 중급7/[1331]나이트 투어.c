#include <stdio.h>
#include <stdlib.h>

/*
나이트의 움직임으로 이동하는가
NO -> invalid
yes -> 갔던 곳이라면 : invalid
		가지 않은 곳이라면
			마지막에 처음 위치로 갈 수 있는지 확인!!
*/


int move(char a[], char b[]) {
	//printf("a : %s\nb : %s\n", a, b);
	int x1, y1, x2, y2;
	x1 = 6 - (a[1] - '0'), y1 = a[0] - 'A';
	x2 = 6 - (b[1] - '0'), y2 = b[0] - 'A';

	int result1, result2;
	result1 = abs(x2 - x1), result2 = abs(y2 - y1);
	if ((result1 == 2 && result2 == 1) || (result1 == 1 && result2 == 2)) return 1;
	else return 0;
}

int main() {
	int check[35][35] = { 0, };
	char start[3], input[3], k[3];

	scanf("%s", &start);
	k[0] = start[0], k[1] = start[1];
	check[6 - (start[1] - '0')][start[0] - 'A'] = 1;
	
	//printf("(x, y) : (%d, %d)\n", x, y);
	for (int i = 0; i < 35; i++) {
		scanf("%s", &input);

		if (move(start, input) == 1 && check[6 - (input[1] - '0')][input[0] - 'A'] == 0) {
			check[6 - (input[1] - '0')][input[0] - 'A'] = 1;
		}
		else {
			printf("Invalid\n");
			return 0;
		}
		start[0] = input[0];
		start[1] = input[1];
	}

	if (move(start, k) == 1) {
		printf("Valid\n");
	}
	else {
		printf("Invalid\n");
	}
}