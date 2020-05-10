#include <stdio.h>
#include <vector>
using namespace std;
//수열의 원소들이 한자리수가 아닐 수도 있다는걸 생각못함

int N, K, input;
vector<int> a, b;

int main() {
	scanf("%d %d", &N, &K);
	scanf("%d", &input);
	a.push_back(input);
	for (int i = 1; i < N; i++) {
		scanf(",%d", &input);
		a.push_back(input);
	}

	while (K--) {
		for (int i = 0; i < a.size() - 1; i++) {
			b.push_back(a[i + 1] - a[i]);
		}
		a.clear();

		for (int i = 0; i < b.size(); i++) {
			a.push_back(b[i]);
		}
		b.clear();
	}

	for (int i = 0; i < a.size(); i++) {
		if (i == a.size() - 1) printf("%d", a[i]);
		else printf("%d,", a[i]);
	}
}