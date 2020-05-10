#include <stdio.h>
#include <stdlib.h>

int compare(const int(*arr1)[], const int(*arr2)[]) {
	return(*arr1)[0] > (*arr2)[0] ? 1 : -1;
}

int main() {
	int i, j, t, n, c, p[21], a[100001][2];
	scanf("%d", &t);
	c = t;
	while (t--) {
		scanf("%d", &n);
		int count = 1;
		for (i = 1; i <= n; i++) {
			for (j = 0; j < 2; j++) {
				scanf("%d", &a[i][j]);
			}
		}
		qsort(a, n + 1, 8, compare);
	
		int pivot = a[1][1];
		for (i = 2; i <= n; i++) {
			if (a[i][1] < pivot) {
				pivot = a[i][1];
				count++;
			}
		}
		p[t] = count;
	}
	for (i = c-1; i >=0; i--) {
		printf("%d\n", p[i]);
	}
}