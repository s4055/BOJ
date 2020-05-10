#include <stdio.h>

int main() {
	int t;
	long long xy[4][2] = { 0, };

	scanf("%d", &t);
	while (t--) {
		for (int i = 0; i < 4; i++) {
				scanf("%lld %lld", &xy[i][0], &xy[i][1]);
		}
	
		long long a, b, c;
		a = (xy[0][0] - xy[1][0]) * (xy[0][0] - xy[1][0]) + (xy[0][1] - xy[1][1]) * (xy[0][1] - xy[1][1]);
		b = (xy[0][0] - xy[2][0]) * (xy[0][0] - xy[2][0]) + (xy[0][1] - xy[2][1]) * (xy[0][1] - xy[2][1]);
		c = (xy[0][0] - xy[3][0]) * (xy[0][0] - xy[3][0]) + (xy[0][1] - xy[3][1]) * (xy[0][1] - xy[3][1]);
		//printf("a : %lld\nb : %lld\nc : %lld\n", a, b, c);

		long long i, j;
		if (a == b && a + b == c) {
			i = (xy[1][0] - xy[3][0]) * (xy[1][0] - xy[3][0]) + (xy[1][1] - xy[3][1]) * (xy[1][1] - xy[3][1]); //13 직
			j = (xy[1][0] - xy[2][0]) * (xy[1][0] - xy[2][0]) + (xy[1][1] - xy[2][1]) * (xy[1][1] - xy[2][1]); //12 대

			if (a == i && c == j) printf("1\n");
			else printf("0\n");
		}
		else if (a == c && a + c == b) {
			i = (xy[2][0] - xy[3][0]) * (xy[2][0] - xy[3][0]) + (xy[2][1] - xy[3][1]) * (xy[2][1] - xy[3][1]); //23 직
			j = (xy[1][0] - xy[3][0]) * (xy[1][0] - xy[3][0]) + (xy[1][1] - xy[3][1]) * (xy[1][1] - xy[3][1]); //13 대

			if (a == i && b == j) printf("1\n");
			else printf("0\n");
		}
		else if (b == c && b + c == a) {
			i = (xy[1][0] - xy[3][0]) * (xy[1][0] - xy[3][0]) + (xy[1][1] - xy[3][1]) * (xy[1][1] - xy[3][1]); //13 직
			j = (xy[2][0] - xy[3][0]) * (xy[2][0] - xy[3][0]) + (xy[2][1] - xy[3][1]) * (xy[2][1] - xy[3][1]); //23 대

			if (b == i && a == j) printf("1\n");
			else printf("0\n");
		}
		else {
			printf("0\n");
		}
	}
}