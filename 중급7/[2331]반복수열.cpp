#include <stdio.h>
#include <vector>
using namespace std;

long long A, P, cnt[300001] = { 0, };
vector<long long> d;

int main() {
	scanf("%lld %lld", &A, &P);

	d.push_back(0);
	d.push_back(A);
	for (int i = 1; i <= 100000; i++) {
		long long temp = d[i], sum = 0;
		while (temp != 0) {
			long long k = 1;
			for (int j = 0; j < P; j++) {
				k *= (temp % 10);
			}
			sum += k;
			temp /= 10;
		}
		d.push_back(sum);
	}

	int count = 0;
	for (int i = 1; i < d.size(); i++) {
		cnt[d[i]]++;
		if (cnt[d[i]] == 2) {
			for (int j = 1; j < d.size(); j++) {
				if (d[j] != d[i]) count++;
				else {
					printf("%d\n", count);
					return 0;
				}
			}
		}
	}
}