#include <stdio.h>
#include <stdlib.h>

int compare(void* a, void* b) {
	int num1 = *(int*)a, num2 = *(int*)b;

	if (num1 > num2) return 1;
	else if (num1 < num2) {return -1;
	else return 0;
}

int people[500001];

int main() {
	int N, i;//지원자 수(1 ≤ N ≤ 500, 000)
	long long int sum = 0;

	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &people[i]);
	}
	qsort(people, N, sizeof(int), compare);//오름차순
	for (i = 1; i <= N; i++) {
		sum += abs(people[i - 1] - i);
	}
	printf("%lld", sum);
}