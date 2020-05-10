#include <stdio.h>

int main() {
	int a, b, c, start, end;
	int park[3][110] = { 0, };

	scanf("%d %d %d", &a, &b, &c);

	for (int i = 0; i < 3; i++) {
		scanf("%d %d", &start, &end);

		for (int j = start; j < end; j++) {
			park[i][j] = 1;
		}
	}
    
	int result = 0;
	for (int i = 1; i <= 100; i++) {
		int sum = 0;
		for (int j = 0; j < 3; j++) {
			sum += park[j][i];
		}
		if (sum == 1) result += (a * 1);
		else if (sum == 2) result += (b * 2);
		else if (sum == 3) result += (c * 3);
	}
	printf("%d\n", result);
}