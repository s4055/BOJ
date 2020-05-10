#include <stdio.h>

void quickSort(int data[], int l, int r) {
	int left = l;
	int right = r;
	int pivot = data[(l + r) / 2];
	while (left <= right) {
		while (data[left] < pivot) left++;
		while (data[right] > pivot) right--;
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
	int n, i, j, temp;
	int max = -1, loop[100000];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &loop[i]);
	}

	//내림차순
	quickSort(loop, 0, n - 1);

	for (i = 0; i < n; i++) {
		if (max < loop[i] * (n - i)) {
			max = loop[i] * (n - i);
		}
	}
	printf("%d", max);
}