#include <stdio.h>
#include <stdlib.h>

int compare(void* a, void* b) {
	int num1 = *(int*)a;
	int num2 = *(int*)b;
	if (num1 < num2) {
		return 1;
	}
	else if (num1 > num2) {
		return -1;
	}
	else {
		return 0;
	}
}

int main() {
	int N, i;// N<=100000 (�ڿ���)
	long long int people[100001];//people<=100000 (�ڿ���)
	long long int sum = 0;
	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%lld", &people[i]);
	}
	qsort(people, N, sizeof(long long int), compare);//��������(�迭�̸�, ���� ��, �迭 ũ��, ���Լ�)

	for (i = 0; i < N; i++) {
		if (people[i] - i > 0) {
			sum += (people[i] - i);
		}
	}
	printf("%lld", sum);
}