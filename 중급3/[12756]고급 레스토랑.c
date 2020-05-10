#include <stdio.h>

int main() {
	int attackA, lifeA, attackB, lifeB;
	scanf("%d %d %d %d", &attackA, &lifeA, &attackB, &lifeB);

	while (1) {
		lifeA -= attackB;
		lifeB -= attackA;

		if (lifeA > 0 && lifeB <= 0) {
			printf("PLAYER A\n");
			return 0;
		}
		else if (lifeA <= 0 && lifeB > 0) {
			printf("PLAYER B\n");
			return 0;
		}
		else if (lifeA <= 0 && lifeB <= 0) {
			printf("DRAW\n");
			return 0;
		}
	}
}