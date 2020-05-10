#include <stdio.h>

int main() {
	int N, L;
	scanf("%d %d", &N, &L);

	int temp, flag, cnt = 0;
	for (int i = 1;; i++) {
		temp = i, flag = 1;
		while (temp != 0) {
			if(temp%10 == L){
				flag = 0;
			}
			temp /= 10;
		}
		if (flag == 1) {
			//printf("i : %d\n", i);
			cnt++;
			if (cnt == N) {
				printf("%d\n", i);
				return 0;
			}
		}
	}
}
