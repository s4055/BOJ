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
	/*아홉 개의 줄에 걸쳐 난쟁이들의 키가 주어진다. 주어지는 키는 100을 넘지 않는 자연수이며, 
	아홉 난쟁이의 키는 모두 다르며, 가능한 정답이 여러 가지인 경우에는 아무거나 출력한다.*/
	//9개 중 7개를 골라 합이 100이 되어야 하는데 9개 중 7개를 고르는 경우에 수는 9개 중에서 2개를 고르는 경우 수와 같다
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