#include <stdio.h>
#include <vector>
using namespace std;
#define MAX 10000000 + 1

int era[MAX] = { 0, };

int main() {
	era[1] = 1;
	for (int i = 2; i * i < MAX; i++) {
		if (!era[i]) {
			for (int j = i * 2; j < MAX; j += i) {
				era[j] = 1;
			}
		}
	}

	int a, b;
	scanf("%d %d", &a, &b);

	for (int i = a; i <= b; i++) {
		if (i > 10000000) {
			printf("-1\n");
			return 0;
		}
		if (!era[i]) {
			vector<int> k;
			int temp = i, f = 1;
			while (temp != 0) {
				k.push_back(temp % 10);
				temp /= 10;
			}
			for (int j = 0; j < k.size(); j++) {
				if (k[j] != k[(k.size() - 1) - j]) f = 0;
			}
			if (f == 1) printf("%d\n", i);
		}
	}
	printf("-1\n");
}