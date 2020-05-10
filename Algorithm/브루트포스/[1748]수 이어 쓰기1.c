#include <stdio.h>

long long int get(int i) {
	int a = 1;
	while (i--) {
		a = a * 10;
	}
	return a;
}

int main() {
	int N, k, count = 0;//1≤N≤100,000,000
	long long int sum = 0;
	scanf("%d", &N);
	k = N;
	while (k != 0) {//자릿수 세기
		k /= 10;
		count++;
	}
	//N의 자릿수에서 -1까지 계산
	//N이 5자리라면 4자리 까지 계산
	for (int i = 1; i < count; i++) {
		sum += 9 * get(i - 1) * i;
	}
	//N의 자릿수 계산
	//N이 5자리라면 앞에서 계산하지 않은 5자리를 계산
	sum += (N - get(count - 1) + 1) * count;
	printf("%lld", sum);
}