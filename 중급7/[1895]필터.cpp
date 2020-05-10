#include <stdio.h>
#include<vector>
#include <algorithm>
using namespace std;

int r, c, t, board[45][45];
vector<int> result;

void cal(int x, int y) {
	vector<int> cmp;

	for (int i = x; i < x + 3; i++) {
		for (int j = y; j < y + 3; j++) {
			cmp.push_back(board[i][j]);
		}
	}
	sort(cmp.begin(), cmp.end());
	result.push_back(cmp[4]);
}

int main() {
	scanf("%d %d", &r, &c);
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			scanf("%d", &board[i][j]);
		}
	}
	scanf("%d", &t);

	for (int i = 0; i <= r - 3; i++) {
		for (int j = 0; j <= c - 3; j++) {
			cal(i, j);
		}
	}

	int cnt = 0;
	for (int i = 0; i < result.size(); i++) {
		if (result[i] >= t) cnt++;
	}
	printf("%d\n", cnt);
}