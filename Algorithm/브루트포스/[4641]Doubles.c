#include <stdio.h>
#include <stdlib.h>

int compare(void* a, void* b) {
	int num1 = *(int*)a, num2 = *(int*)b;
	if (num1 > num2) return 1;
	else if (num1 < num2) return -1;
	else return 0;
}

int main() {
	int a, t = 0;
	int num[16];

	while (1) {
		scanf("%d", &a);
		if (a == -1) break;

		num[t++] = a;
		if (a == 0) {
			qsort(num, t, sizeof(int), compare);
			int count = 0;
			for (int i = 0; i < t - 1; i++) {
				for (int j = i + 1; j < t; j++) {
					if (num[i] * 2 == num[j]) {
						count++;
					}
				}
			}
			printf("%d\n", count);
			t = 0;
		}
	}		
}