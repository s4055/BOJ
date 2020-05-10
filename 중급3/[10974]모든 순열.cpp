#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, factorial[10] = { 0, 1, 2, 6, 24, 120, 720, 5040, 40320 };
	scanf("%d", &N);

	vector<int> num;
	for (int i = 1; i <= N; i++) {
		num.push_back(i);
	}

	for (int i = 0; i < factorial[N]; i++) {
		for (int j = 0; j < num.size(); j++) {
			printf("%d ", num[j]);
		}
		printf("\n");
		next_permutation(num.begin(), num.end());//순열
	}
}