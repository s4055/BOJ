#include <stdio.h>
#include <string.h>
/*
1 .화살표를 한 칸 아래로 내린다. (채널 i에서 i+1로)
2 .화살표를 위로 한 칸 올린다. (채널 i에서 i-1로)
3 .현재 선택한 채널을 한 칸 아래로 내린다. (채널 i와 i+1의 위치를 바꾼다. 화살표는 i+1을 가리키고 있는다)
4 .현재 선택한 채널을 위로 한 칸 올린다. (채널 i와 i-1의 위치를 바꾼다. 화살표는 i-1을 가리키고 있다)
1, 4번만 사용
*/
int main() {
	int N, i, j, k1, k2;// N : 채널의 수(2 ≤ N ≤ 100), 채널은 최대 10글자(알파벳 대문자 + 숫자 조합), 방법의 길이는 500보다 작아야함
	char channel[101][11];
	scanf("%d", &N);
	for (i = 1; i <= N; i++) {
		scanf("%s", &channel[i]);
		if (strcmp(channel[i], "KBS1")==0) {
			k1 = i;
		}
		if (strcmp(channel[i], "KBS2") == 0) {
			k2 = i;
		}
	}

	if (k2 < k1) {
		for (j = 1; j <= k2 - 1; j++) {
			printf("%c", '1');
		}
		for (j = 1; j <= k2 - 1; j++) {
			printf("%c", '4');
		}
		for (j = 1; j <= k1 - 1; j++) {
			printf("%c", '1');
		}
		for (j = 1; j <= k1 - 1; j++) {
			printf("%c", '4');
		}
	}
	else {
		for (j = 1; j <= k2 - 1; j++) {
			printf("%c", '1');
		}
		for (j = 1; j <= k2 - 1; j++) {
			printf("%c", '4');
		}
		for (j = 1; j <= k1; j++) {
			printf("%c", '1');
		}
		for (j = 1; j <= k1; j++) {
			printf("%c", '4');
		}
	}
}