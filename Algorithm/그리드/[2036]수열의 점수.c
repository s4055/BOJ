#include <stdio.h>
#include <stdlib.h>

int upCompare(void* a, void* b) {
	int num1 = *(int*)a;
	int num2 = *(int*)b;
	if (num1 > num2) {
		return 1;
	}
	else if (num1 < num2) {
		return -1;
	}
	else {
		return 0;
	}
}

int downCompare(void* a, void* b) {
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

long long int Plus[100001], Minus[100001];//������ 1, 000, 000�� ���� �ʴ� ����
int main() {
	int n, i, a, plus = 0, minus = 0, zero = 0, one = 0;//n : ���� ����n(1��n��100, 000)

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		if (a == 0) zero++;
		else if (a == 1) one++;
		else if (a > 0) {
			Plus[plus] = a;
			plus++;
		}
		else {
			Minus[minus] = a;
			minus++;
		}
	}
	qsort(Plus, plus, sizeof(long long int), downCompare);//��������(���)
	qsort(Minus, minus, sizeof(long long int), upCompare);//��������(����)

	long long sum = 0;
	if (plus % 2 == 0) {//����� ������ ¦�� �϶�
		for (i = 0; i < plus; i += 2) {
			sum += Plus[i] * Plus[i + 1];
		}
	}
	else {//����� ������ Ȧ�� �϶�
		for (i = 0; i < plus - 1; i += 2) {
			sum += Plus[i] * Plus[i + 1];
		}
		sum += Plus[plus - 1];
	}
	sum += one;//1�� ������ ����
	if (minus % 2 == 0) {//������ ������ ¦�� �϶�
		for (i = 0; i < minus; i += 2) {
			sum += Minus[i] * Minus[i + 1];
		}
	}
	else {
		if (zero == 0) {//������ ������ Ȧ���̰� 0�� ���� ��
			for (i = 0; i < minus - 1; i += 2) {
				sum += Minus[i] * Minus[i + 1];
			}
			sum += Minus[minus - 1];
		}
		else {//������ ������ Ȧ���̰� 0�� ���� ��
			for (i = 0; i < minus - 1; i += 2) {
				sum += Minus[i] * Minus[i + 1];
			}
		}
	}
	printf("%lld", sum);
}