#include <stdio.h>

int main() {
	int n, i, j, temp;
	int max = -1, loop[100000];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &loop[i]);
	}
	//내림차순
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (loop[i] < loop[j]) {
				temp = loop[i];
				loop[i] = loop[j];
				loop[j] = temp;
			}
		}
	}
	for (i = 0; i < n; i++) {
		if (max < loop[i] * (n - i)){
			max = loop[i] * (n - i);
		}
	}
	printf("%d", max);
}