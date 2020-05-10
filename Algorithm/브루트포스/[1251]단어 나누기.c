#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a[51];
char result[1180][51] = { 0, };

int compare(const void* a, const void* b) {
	/*if (strcmp((char*)a, (char*)b) > 0) {
		return 1;
	}
	else if (strcmp((char*)a, (char*)b) < 0) {
		return -1;
	}
	else {
		return 0;
	}*/
	return strcmp((char*)a, (char*)b);
}

//x, y�� �̿��ؼ� ���� ������ ����
//strcat�� ���ڿ��� ����ϱ� ������
//strcat(result[0], a[i]) => ������� ����
void go(int x, int y, int cnt) {
	char t1[51] = { 0, }, t2[51] = { 0, }, t3[51] = { 0, };
	int idx1 = 0, idx2 = 0, idx3 = 0;

	for (int i = x; i >= 0; i--) {
		t1[idx1++] = a[i];
	}
	strcat(result[cnt], t1);

	for (int i = y; i > x; i--) {
		t2[idx2++] = a[i];
	}
	strcat(result[cnt], t2);

	for (int i = strlen(a) - 1; i > y; i--) {
		t3[idx3++] = a[i];
	}
	strcat(result[cnt], t3);
	//printf("cnt[%d] : %s\n", cnt, result[cnt]);
}

int main() {
	scanf("%s", &a);
	int cnt = 0;
	for (int i = 0; i < strlen(a) - 2; i++) {
		for (int j = i + 1; j < strlen(a) - 1; j++) {
			go(i, j, cnt);
			cnt++;
		}
	}
	qsort(result, cnt, sizeof(result[0]), compare);//��������
	for (int i = 0; i < strlen(a); i++) {
		printf("%c", result[0][i]);
	}
}