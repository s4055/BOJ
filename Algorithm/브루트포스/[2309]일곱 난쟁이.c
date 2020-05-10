#include <stdio.h>
#include <stdlib.h>

int compare(void* a, void* b) {
	int num1 = *(int*)a, num2 = *(int*)b;
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

int main() {
	/*��ȩ ���� �ٿ� ���� �����̵��� Ű�� �־�����. �־����� Ű�� 100�� ���� �ʴ� �ڿ����̸�, 
	��ȩ �������� Ű�� ��� �ٸ���, ������ ������ ���� ������ ��쿡�� �ƹ��ų� ����Ѵ�.*/
	//9�� �� 7���� ��� ���� 100�� �Ǿ�� �ϴµ� 9�� �� 7���� ���� ��쿡 ���� 9�� �߿��� 2���� ���� ��� ���� ����
	int sum, height[10], a, b;
	
	sum = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &height[i]);
		sum += height[i];
	}
	
	qsort(height, 9, sizeof(int), compare);
	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sum - (height[i] + height[j]) == 100) {
				a = i;
				b = j;
				break;
			}
		}
	}
	//printf("a : %d, b : %d", a, b);
	for (int i = 0; i < 9; i++) {
		if (i != a && i != b) {
			printf("%d\n", height[i]);
		}
	}
}