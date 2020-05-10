#include <stdio.h>

/*
Round
1	2	3	4	5	6	7	8	9
1	2	3	4	5
1	2	3
1	2
1
*/

int main() {
	int N, kim, lim;

	scanf("%d %d %d", &N, &kim, &lim);

	int round = 0;
	while (kim != lim) {
		kim = (kim + 1) / 2;
		lim = (lim + 1) / 2;
		round++;
	}

	printf("%d\n", round);
}