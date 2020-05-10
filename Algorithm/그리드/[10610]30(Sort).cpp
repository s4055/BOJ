#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main(void) {
	char a[100001];
	int count = 0, sum = 0;
	cin >> a;
	for (int i = 0; i < strlen(a); i++) {
		if (a[i] == '0') {
			count++;
		}
		else {
			sum += (int)(char)(a[i] - '0');
		}
	}
	if (count != 0 && sum % 3 == 0) {
		sort(a, a + strlen(a));
		for (int i = strlen(a) - 1; i >= 0; i--) {
			cout << a[i];
		}
	}
	else {
		cout << -1;
	}
}