#include <stdio.h>

//오일러의 정리
int main() {
	long long out, in;
	scanf("%lld %lld", &out, &in);
	
	printf("%lld\n", out * (out - 2 * in));
}