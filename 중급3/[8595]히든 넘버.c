#include <stdio.h>

int n;
char word[5000001] = { 0, };

int main() {
	scanf("%d %s", &n, &word);

	int r = 1, temp = 0;
	long long sum = 0;
	for (int i = n - 1; i >= 0; i--) {
		if ('0' <= word[i] && word[i] <= '9') {
			temp += (word[i] - '0') * r;
			r *= 10;
		}
		else {
			sum += temp;
			r = 1, temp = 0;
		}

        //i = 0일때 숫자로 끝났다면
        //sum에서 더해지 않기 때문에 예외처리
		if (i == 0 && temp != 0) {
			sum += temp;
		}
	}
	printf("%lld\n", sum);
}