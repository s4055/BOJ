#include <stdio.h>
#include <string.h>//strcat(문자열1, 문자열2) : 문자열1에 문자열2를 합치기

int main() {
	int i, j, count = 0, count_x = 0;
	char board[501] = { 0, }, result[501] = {0, };//AAAA와 BB를 사용하여 X에 채워 넣는다(사전순으로), 없다면 -1출력, reault : 값들을 저장
	scanf("%s", &board);

	for (i = 0; i < strlen(board)+1; i++) {
		if (board[i] == 'X') {
			count++;
		}
		if (board[i] == '.' || board[i]==0) {
			if (count % 2 != 0) {
				printf("%d", -1);
				return 0;
			}
			else {
				for (j = 0; j < count / 4; j++) {
					strcat(result, "AAAA");
				}
				for (j = 0; j < (count % 4) / 2; j++) {
					strcat(result, "BB");
				}
				if(board[i]!=0) strcat(result, ".");
				count = 0;
			}
		}
	}
	for (i = 0; i < strlen(result); i++) {
		printf("%c", result[i]);
	}
}