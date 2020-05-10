#include <stdio.h>

int main() {
	int n, m, i, j, k, s, e, count = 0;
	scanf("%d %d", &n, &m);//n : 스크린 칸, m : 바구니 칸
	scanf("%d", &j);//사과 개수

	s = 1, e = m;
	for (i = 0; i < j; i++) {
		scanf("%d", &k);

		if (k >= s && k <= e) {
			continue;
		}
		if (k > e) {
			count += k - e;
			s = s + (k - e);
			e = k;
		}
		if(k < s){
			count += s - k;
			e = e - (s - k);
			s = k;
		}
	}
	printf("%d", count);
}