#include <stdio.h>

void quickSort(char* data, int l, int r) {
	int left = l;
	int right = r;
	int pivot = data[(l + r) / 2];
	while (left <= right) {
		while (data[left] > pivot) left++;
		while (data[right] < pivot) right--;
		if (left <= right) {
			int temp = data[left];
			data[left] = data[right];
			data[right] = temp;
			left++;
			right--;
		}
	}
	if (l < right) {
		quickSort(data, l, right);
	}
	if (r > left) {
		quickSort(data, left, r);
	}
}
int main() {
	char a[100001];
	int i, sum = 0, count = 0;

	scanf("%s", &a);
	for (i = 0; i < strlen(a); i++) {
		if (a[i] == '0') {
			count++;
		}
		else {
			sum += (int)(char)(a[i] - '0');
		}
	}
	
	if ((count != 0) && (sum % 3 == 0)) {
		quickSort(a, 0, strlen(a) - 1);
		for (i = 0; i < strlen(a); i++) {
			printf("%c", a[i]);
		}
	}
	else {
		printf("-1");	
	}
}