#include <stdio.h>

int main() {
	int N, m[13] = { 0, 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	char input[12];

	scanf("%s %d", &input, &N);
	
	int Year, Month, Day;
	Year = (input[0] - '0') * 1000 + (input[1] - '0') * 100 + (input[2] - '0') * 10 + (input[3] - '0') * 1;
	Month = (input[5] - '0') * 10 + (input[6] - '0') * 1;
	Day = (input[8] - '0') * 10 + (input[9] - '0') * 1;

	//printf("Year : %d\nMonth : %d\nDay : %d\n\n", Year, Month, Day);

	if (N == 1) {
		printf("%04d-%02d-%02d\n", Year, Month, Day);
	}
	else {
		while (N--) {
			if (Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0) m[2] = 29;
			else m[2] = 28;

			Day++;
			if (Day > m[Month]) {
				Day = 1;
				Month++;
			}
			if (Month > 12) {
				Month = 1;
				Year++;
			}
			//printf("(Year, Month, Day, N) : (%d, %d, %d, %d)\n", Year, Month, Day, N);

			if (N == 1) {
				printf("%04d-%02d-%02d\n", Year, Month, Day);
				return 0;
			}
		}
	}
}