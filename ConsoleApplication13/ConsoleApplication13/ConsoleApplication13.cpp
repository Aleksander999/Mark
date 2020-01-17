#include <iostream>
#include <cmath>

using namespace std;

long long N, M = 1, result = 1;

int main() {

	cin >> N;

	M = 1;
	result = 1;

	if (N == 0) {
		cout << 0;
	}
	else {
		while ((M = M * 2) <= N) {
			result++;
		}
		cout << result;
	}
	return 0;
}
