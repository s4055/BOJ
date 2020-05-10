#include <stdio.h>

/*AABBCCCDD
답 : ABCDCDCBA
출력 : ABCCDDCBA*/
int main() {
	//A B C D E F G H I J K L M N
	//O P Q R S T U V W X Y Z			even(짝), odd(홀)
	int compare[26], alphabet[26] = { 0, };
	char name[50];

	scanf("%s", name);
	//알파벳 별로 몇 개씩 사용 되었는지 체크
	for (int i = 0; i < strlen(name); i++) {
		for (int j = 65; j <= 90; j++) {
			if (name[i] == j) {
				alphabet[j - 65]++;
			}
		}
	}
	//짝수와 홀수가 몇 개 있는지 카운트
	//짝수는 갯수의 절반을 배열 even에 저장
	int Even = 0, Odd = 0;
	for (int i = 0; i < 26; i++) {
		if (alphabet[i] % 2 == 0) {
			compare[i] = alphabet[i] / 2;
			Even++;
		}
		else {
			compare[i] = alphabet[i] / 2;
			Odd++;
		}
	}
	//짝수로만 이루어지거나 홀수의 갯수가 한 개로 이루어진 경우만 가능
	if (Odd == 0 || Odd == 1) {
		for (int i = 0; i < 26; i++) {
			if (compare[i] != 0) {
				for (int j = 0; j < compare[i]; j++) {
					printf("%c", i + 65);
				}
			}
		}
		for (int i = 0; i < 26; i++) {
			if (alphabet[i] % 2 == 1) {
				printf("%c", i + 65);
			}
		}
		for (int i = 25; i >= 0; i--) {
			if (compare[i] != 0) {
				for (int j = 0; j < compare[i]; j++) {
					printf("%c", i + 65);
				}
			}
		}
	}
	else {
		printf("I'm Sorry Hansoo");
	}
}