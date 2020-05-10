#include <stdio.h>

int main() {
	int N, m[13] = { 0, 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	scanf("%d", &N);

	int year = 2014, sum = 0;
	for (int month = 4; month <= 12; month++) {
		if (month == 2) {
			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {//윤년(2/29)
				sum += 29;
			}
			else {	//평년(2/28)
				sum += 28;
			}
		}
		else {
			sum += m[month];
		}
		//printf("(year, sum, month) : (%d, %d, %d)\n", year, sum, month);
		if (sum > N) {
			if (month == 2) {
				if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
					printf("%04d-%02d-%02d\n", year, month, 29 - (sum - N -2) - 1);
					break;
				}
				else {
					printf("%04d-%02d-%02d\n", year, month, 28 - (sum - N - 2) - 1);
					break;
				}
			}
			else {
				printf("%04d-%02d-%02d\n", year, month, m[month] - (sum - N - 2) - 1);
				break;
			}
		}
		if (month == 12) {
			year++;
			month = 0;
		}
	}
}