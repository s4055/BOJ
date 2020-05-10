#include <stdio.h>

int main() {
	int money, count = 0;
	scanf("%d", &money);
	money = 1000 - money;
	count += money / 500;
	money %= 500;
	count += money / 100;
	money %= 100;
	count += money / 50;
	money %= 50;
	count += money / 10;
	money %= 10;
	count += money / 5;
	money %= 5;
	count += money / 1;
	money %= 1;
	printf("%d", count);
}