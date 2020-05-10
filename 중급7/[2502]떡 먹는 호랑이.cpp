#include <stdio.h>
#include <vector>
using namespace std;

int main() {
	int D, K;
	scanf("%d %d", &D, &K);

	vector<int> day;
	day.push_back(0); day.push_back(1); day.push_back(2);
	for (int i = 1; i < 27; i++) {
		day.push_back(day[i + 1] + day[i]);
	}
	//printf("%d %d\n", day[D - 2], day[D - 3]);

	if (D > 3) {
		for (int A = 1;; A++) {
			for (int B = 1; day[D - 2] * B + day[D - 3] * A <= K; B++) {
				if (day[D - 2] * B + day[D - 3] * A == K) {
					printf("%d\n%d\n", A, B);
					return 0;
				}
			}
		}
	}
	else {
		printf("%d\n%d\n", 1, K - 1);
	}
}