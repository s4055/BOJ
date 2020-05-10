#include <stdio.h>
#include <string.h>

int main() {
	int N;
	char password[105][16] = { 0, };

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s", &password[i][0]);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (strlen(password[i]) == strlen(password[j])) {
				//printf("i : %s\nj : %s\n\n", password[i], password[j]);
				int cnt = 0;
				for (int k = 0; k < strlen(password[i]); k++) {
					//printf("password[%d][%d] : %c\npassword[%d][%d] : %c\n\n", i, k, password[i][k], j, strlen(password[i]) - 1 - k, password[j][strlen(password[i]) - 1 - k]);
					if (password[i][k] == password[j][strlen(password[i]) - 1 - k]) {
						cnt++;
						//printf("cnt : %d\n", cnt);
					}
				}
				if (cnt == strlen(password[i])) {
					printf("%d %c\n", strlen(password[i]), password[i][strlen(password[i]) / 2]);
					return 0;
				}
			}
		}
	}
}