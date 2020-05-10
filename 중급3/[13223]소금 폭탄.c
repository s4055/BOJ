#include <stdio.h>

int main() {
	int h1, m1, s1, h2, m2, s2, second;
	char time1[10] = { 0, }, time2[10] = { 0, };

	scanf("%s %s", &time1, &time2);

	h1 = (time1[0] - '0') * 10 + (time1[1] - '0') * 1;
	m1 = (time1[3] - '0') * 10 + (time1[4] - '0') * 1;
	s1 = (time1[6] - '0') * 10 + (time1[7] - '0') * 1;

	h2 = (time2[0] - '0') * 10 + (time2[1] - '0') * 1;
	m2 = (time2[3] - '0') * 10 + (time2[4] - '0') * 1;
	s2 = (time2[6] - '0') * 10 + (time2[7] - '0') * 1;

	//printf("h1 : %d\nm1 : %d\ns1 : %d\n\nh2 : %d\nm2 : %d\ns2 : %d\n", h1, m1, s1, h2, m2, s2);

	second = (h2 - h1) * 60 * 60 + (m2 - m1) * 60 + (s2 - s1);
	if (second <= 0) second += 24 * 60 * 60;
	printf("%02d:%02d:%02d\n", second / 60 / 60, second / 60 % 60, second % 60);
}