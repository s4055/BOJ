#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		long long x1, y1, r1, x2, y2, r2, temp;
		scanf("%lld %lld %lld %lld %lld %lld", &x1, &y1, &r1, &x2, &y2, &r2);

		//전제 조건 : r1 >= r2
		if (r1 < r2) {
			temp = r2;
			r2 = r1;
			r1 = temp;
		}
		
		long long d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);//두 원의 중심 사이 거리
		long long add = (r1 + r2) * (r1 + r2);
		long long sub = (r1 - r2) * (r1 - r2);

		//무한대 : 두 원의 중심과 반지름이 같음
		if (d == 0 && r1 == r2) {
			printf("-1\n");
		}
		//교점 0 : (1) r1 + r2 < d, (2) d < r1 - r2, (3) d = 0 && r1 != r2
		else if (add < d || d < sub || (d == 0 && r1 != r2)) {
			printf("0\n");
		}
		//교점 1 : 외접(r1 + r2 = d), 내접(r1 - r2 = d && d != 0)
		else if (add == d || (sub == d && d != 0)) {
			printf("1\n");
		}
		//교점 2 : r1 - r2 < d < r1 + r2
		else if (add > d && sub < d) {
			printf("2\n");
		}
	}
}