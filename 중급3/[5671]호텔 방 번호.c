#include <stdio.h>

int main() {
	int N, M;
	
	while (scanf("%d %d", &N, &M) != EOF) {
		int num[5001] = { 0, }; 
		for (int i = N; i <= M; i++) {
			int check[10] = { 0, }, temp = i;
			while (temp != 0) {
				check[temp % 10]++;
				temp /= 10;
			}

			for (int j = 0; j < 10; j++) {
				if (check[j] >= 2) {
					num[i] = 1;
				}
			}
		}
	
		int cnt = 0;
		for (int i = N; i <= M; i++) {
			if (num[i] == 0) cnt++;
		}
		printf("%d\n", cnt);
	}
}