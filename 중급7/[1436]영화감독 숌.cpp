#include <stdio.h>
#include <vector>
using namespace std;

int main() {
	vector<int> num;

	int k = 666;
	while (num.size() != 10000) {
		int temp = k, cnt = 0;
		while (temp != 0) {
			if (temp % 10 == 6) cnt++;
			else cnt = 0;

			if (cnt == 3) num.push_back(k);
			temp /= 10;
		}
		k++;
	}

	/*for (int i = 0; i < num.size(); i++) {
		printf("num[%d] : %d\n", i, num[i]);
	}*/

	int N;
	scanf("%d", &N);
	printf("%d\n", num[N - 1]);
}