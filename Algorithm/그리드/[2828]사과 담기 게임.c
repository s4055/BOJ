#include <stdio.h>

int main() {
	int n, m, i, j, k, s, e, count = 0;
	scanf("%d %d", &n, &m);//n : ��ũ�� ĭ, m : �ٱ��� ĭ
	scanf("%d", &j);//��� ����

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