#include <stdio.h>
#include <vector>
using namespace std;

int era[100001] = { 0, };

int main() {
	era[0] = era[1] = 1;
	for (int i = 2; i * i < 100001; i++) {
		if (!era[i]) {
			for (int j = i * 2; j < 100001; j += i) {
				era[j] = 1;
			}
		}
	}

	vector<int> prime;
	for (int i = 2; i < 100001; i++) {
		if (!era[i]) prime.push_back(i);
	}

	int a, b;
	scanf("%d %d", &a, &b);
	
	int result = 0;
	for (int i = a; i <= b; i++) {
		int temp = i, cnt = 0;
		for (int j = 0; j < prime.size(); j++) {
			while (temp % prime[j] == 0) {
				cnt++;
				temp /= prime[j];
				if (temp == 1) break;
			}
			if (temp == 1) break;
		}
		if (era[cnt] == 0) {
			result++;
		}
	}
	printf("%d\n", result);
}