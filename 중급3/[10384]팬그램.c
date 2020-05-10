#include <stdio.h>
#include <string.h>

int main() {
	int t;

	scanf("%d", &t);
	for (int i = 0; i < t + 1; i++) {
		int check[26] = { 0, };
		char sentence[500] = { 0, };

		gets(sentence);

		for (int j = 0; j < strlen(sentence); j++) {
			if ('a' <= sentence[j] && sentence[j] <= 'z') {
				check[sentence[j] - 'a']++;
			}
			if ('A' <= sentence[j] && sentence[j] <= 'Z') {
				check[sentence[j] - 'A']++;
			}
		}

		int one = 0, two = 0, three = 0;
		for (int j = 0; j < 26; j++) {
			if (check[j] >= 1) one++;
			if (check[j] >= 2) two++;
			if (check[j] >= 3) three++;
		}

		if (i != 0) {
			if (three == 26) {
				printf("Case %d: Triple pangram!!!\n", i);
			}
			else if (two == 26) {
				printf("Case %d: Double pangram!!\n", i);
			}
			else if (one == 26) {
				printf("Case %d: Pangram!\n", i);
			}
			else {
				printf("Case %d: Not a pangram\n", i);
			}
		}
	}
}