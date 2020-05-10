#include <stdio.h>
#include <string.h>

int main() {
	int N, count[3] = { 0, };//1 ≤ N ≤ 100
	//adrian : ABC 반복, bruno : BABC 반복, goran : CCAABB 반복
	char problem[101], adrian[121] = { 0, }, bruno[121] = { 0, }, goran[121] = { 0, }, name[3][7] = { "Adrian", "Bruno", "Goran" };
	scanf("%d", &N);
	scanf("%s", &problem);
	for (int i = 0; i < 10; i++) {
		strcat(adrian, "ABCABCABCABC");
		strcat(bruno, "BABCBABCBABC");
		strcat(goran, "CCAABBCCAABB");
	}
	for (int i = 0; i < N; i++) {
		if (problem[i] == adrian[i]) count[0]++;
		if (problem[i] == bruno[i]) count[1]++;
		if (problem[i] == goran[i]) count[2]++;
	}
	int s = count[0] > count[1] ? count[0] : count[1];
	int k = count[2] > s ? count[2] : s;
	if (k == 0) {
		printf("%d", 0);
	}
	else {
		printf("%d\n", k);
		for (int i = 0; i < 3; i++) {
			if (k == count[i]) {
				printf("%s\n", name[i]);
			}
		}
	}
}