#include <stdio.h>

long long int get(int i) {
	int a = 1;
	while (i--) {
		a = a * 10;
	}
	return a;
}

int main() {
	int N, k, count = 0;//1��N��100,000,000
	long long int sum = 0;
	scanf("%d", &N);
	k = N;
	while (k != 0) {//�ڸ��� ����
		k /= 10;
		count++;
	}
	//N�� �ڸ������� -1���� ���
	//N�� 5�ڸ���� 4�ڸ� ���� ���
	for (int i = 1; i < count; i++) {
		sum += 9 * get(i - 1) * i;
	}
	//N�� �ڸ��� ���
	//N�� 5�ڸ���� �տ��� ������� ���� 5�ڸ��� ���
	sum += (N - get(count - 1) + 1) * count;
	printf("%lld", sum);
}