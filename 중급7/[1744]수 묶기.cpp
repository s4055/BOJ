#include <stdio.h>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
	int N, input, zero = 0, one = 0;

	scanf("%d", &N);

	vector<int> p, m;
	for (int i = 0; i < N; i++) {
		scanf("%d", &input);
		if (input == 1) one++;
		else if (input > 0) p.push_back(input);
		else if (input < 0) m.push_back(input);
		else zero++;
	}

	sort(p.begin(), p.end(), greater<int>());//내림차순
	sort(m.begin(), m.end());//오름차순

	long long sum = 0;
	if (p.size() % 2 == 0 && m.size() % 2 == 0) {
		for (int i = 0; i < p.size(); i += 2) sum += (p[i] * p[i + 1]);
		for (int i = 0; i < m.size(); i += 2) sum += (m[i] * m[i + 1]);
		if (one > 0) printf("%lld\n", sum + one);
		else printf("%lld\n", sum);
	}
	else if (p.size() % 2 == 0 && m.size() % 2 == 1) {
		for (int i = 0; i < p.size(); i += 2) sum += (p[i] * p[i + 1]);
		for (int i = 0; i < m.size() - 1; i += 2) sum += (m[i] * m[i + 1]);
		if (one > 0) {
			if (zero > 0) printf("%lld\n", sum + one);
			else printf("%lld\n", sum + m[m.size() - 1] + one);
		}
		else {
			if (zero > 0) printf("%lld\n", sum);
			else printf("%lld\n", sum + m[m.size() - 1]);
		}
	}
	else if (p.size() % 2 == 1 && m.size() % 2 == 0) {
		for (int i = 0; i < p.size() - 1; i += 2) sum += (p[i] * p[i + 1]);
		for (int i = 0; i < m.size(); i += 2) sum += (m[i] * m[i + 1]);
		if(one > 0) printf("%lld\n", sum + p[p.size() - 1] + one);
		else printf("%lld\n", sum + p[p.size() - 1] + one);
	}
	else if (p.size() % 2 == 1 && m.size() % 2 == 1) {
		for (int i = 0; i < p.size() - 1; i += 2) sum += (p[i] * p[i + 1]);
		for (int i = 0; i < m.size() - 1; i += 2) sum += (m[i] * m[i + 1]);
		if (one > 0) {
			if (zero > 0) printf("%lld\n", sum + p[p.size() - 1] + one);
			else printf("%lld\n", sum + p[p.size() - 1] + m[m.size() - 1] + one);
		}
		else {
			if (zero > 0) printf("%lld\n", sum + p[p.size() - 1]);
			else printf("%lld\n", sum + p[p.size() - 1] + m[m.size() - 1]);
		}
	}
}