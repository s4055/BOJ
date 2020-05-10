#include <stdio.h>
#include <string.h>

int main() {
	int N, count, cnt[105] = { 0, };
	char input[15] = { 0, };

	scanf("%s %d", &input, &N);
	for (int i = 0; i < N; i++) {
		char word[25] = { 0, }, copy[25] = { 0, };

		scanf("%s", &word);
		for (int j = 0; j < strlen(word); j++) {
			copy[j] = word[j];
		}
		strcat(word, copy);

		//비교
		for (int j = 0; j < 10; j++) {
			count = 0;
			for (int k = 0; k < strlen(input); k++) {
				if (input[k] == word[k + j]) count++;
				if (count == strlen(input)) cnt[i] = 1;
			}
		}
	}
	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum += cnt[i];
	}
	printf("%d\n", sum);
}