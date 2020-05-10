#include <stdio.h>

char a[100003] = { 0, }, b[100003] = { 0, };

int main() {
	scanf("%s %s", &a, &b);

	for (int i = 0; i < 100000; i++) {
		if (a[i] == '1' && b[i] == '1') printf("1");
		else printf("0");
	}
	printf("\n");
	for (int i = 0; i < 100000; i++) {
		if (a[i] == '1' || b[i] == '1') printf("1");
		else printf("0");
	}
	printf("\n");
	for (int i = 0; i < 100000; i++) {
		if (a[i] != b[i]) printf("1");
		else printf("0");
	}
	printf("\n");
	for (int i = 0; i < 100000; i++) {
		if (a[i] == '1') printf("0");
		else printf("1");
	}
	printf("\n");
	for (int i = 0; i < 100000; i++) {
		if (b[i] == '1') printf("0");
		else printf("1");
	}
	printf("\n");
}