#include <stdio.h>

int N, xy[10001] = { 0, };

int main() {
	scanf("%d", &N);

	int start, end;
	while (N--) {
		scanf("%d %d", &start, &end);
		
		for (int i = start; i < end; i++) {
			xy[i]++;
		}
	}

	int cnt = 0;
	for (int i = 1; i <= 10000; i++) {
		if (xy[i] > 0) cnt++;
	}
	printf("%d\n", cnt);
}