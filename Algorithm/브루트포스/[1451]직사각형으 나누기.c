#include <stdio.h>//sum = sum + (a[i][j] - '0');

int N, M;//N(세로), M(가로) : 100보다 작거나 같은 자연수
long long int result = 0;
char num[101][101] = { 0, };

void go3(int x, int y) {
	long long int a = 0, b = 0, c = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= x; j++) {
			a = a + (num[i][j] - '0');
			//printf("go3 a : %lld\n", a);
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = x + 1; j <= y; j++) {
			b = b + (num[i][j] - '0');
			//printf("go3 b : %lld\n", b);
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = y + 1; j < M; j++) {
			c = c + (num[i][j] - '0');
			//printf("go3 c : %lld\n", c);
		}
	}
	long long int r = a * b * c;
	printf("go3 : %lld x : %d y : %d\n\n", r, x, y);
	result = result > r ? result : r;
}

void go2(int x, int y) {
	long long int a = 0, b = 0, c = 0;
	for (int i = 0; i <= x; i++) {
		for (int j = 0; j < M; j++) {
			a = a + (num[i][j] - '0');
			//printf("go2 a : %lld\n", a);
		}
	}
	for (int i = x + 1; i <= y; i++) {
		for (int j = 0; j < M; j++) {
			b = b + (num[i][j] - '0');
			//printf("go2 b : %lld\n", b);
		}
	}
	for (int i = y + 1; i < N; i++) {
		for (int j = 0; j < M; j++) {
			c = c + (num[i][j] - '0');
			//printf("go2 c : %lld\n", c);
		}
	}
	long long int r = a * b * c;
	printf("go2 r : %lld x : %d y : %d\n\n", r, x, y);
	result = result > r ? result : r;
}

void go1(int x, int y) {
	long long int a = 0, b = 0, c = 0, d = 0;
	long long int first, two, three, four, t1, t2, r;
	for (int i = 0; i <= x; i++) {
		for (int j = 0; j <= y; j++) {
			a = a + (num[i][j] - '0');
			//printf("go1 a : %lld\n", a);
		}
	}
	for (int i = 0; i <= x; i++) {
		for (int j = y + 1; j < M; j++) {
			b = b + (num[i][j] - '0');
			//printf("go1 b : %lld\n", b);
		}
	}
	for (int i = x + 1; i < N; i++) {
		for (int j = 0; j <= y; j++) {
			c = c + (num[i][j] - '0');
			//printf("go1 c : %lld\n", c);
		}
	}
	for (int i = x + 1; i < N ; i++) {
		for (int j = y + 1; j < M ; j++) {
			d = d + (num[i][j] - '0');
			//printf("go1 d : %lld\n", d);
		}
	}
	first = (a + b) * c * d;//a + b	c	d
	two = (a + c) * b * d;//a + c	b	d
	three = (c + d) * a * b;//c + d	a	b
	four = (b + d) * a * c;//b + d	a	c
	printf("%d %d %lld %lld %lld %lld\n\n", x, y, first, two, three, four);
	t1 = first > two ? first : two;
	t2 = three > four ? three : four;
	r = t1 > t2 ? t1 : t2;
	result = result > r ? result : r;
}

int main() {
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		scanf("%s", &num[i]);
	}
	//가로, 세로
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < M - 1; j++) {
			go1(i, j);
		}
	}
	//가로
	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			go2(i, j);
		}
	}
	//세로
	for (int i = 0; i < M - 2; i++) {
		for (int j = i + 1; j < M - 1; j++) {
			go3(i, j);
		}
	}
	printf("%lld", result);
}