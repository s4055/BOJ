#include <stdio.h>

/*AABBCCCDD
�� : ABCDCDCBA
��� : ABCCDDCBA*/
int main() {
	//A B C D E F G H I J K L M N
	//O P Q R S T U V W X Y Z			even(¦), odd(Ȧ)
	int compare[26], alphabet[26] = { 0, };
	char name[50];

	scanf("%s", name);
	//���ĺ� ���� �� ���� ��� �Ǿ����� üũ
	for (int i = 0; i < strlen(name); i++) {
		for (int j = 65; j <= 90; j++) {
			if (name[i] == j) {
				alphabet[j - 65]++;
			}
		}
	}
	//¦���� Ȧ���� �� �� �ִ��� ī��Ʈ
	//¦���� ������ ������ �迭 even�� ����
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
	//¦���θ� �̷�����ų� Ȧ���� ������ �� ���� �̷���� ��츸 ����
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