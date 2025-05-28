#include <iostream>

using namespace std;


int fac(int num) {
	int res = 1;
	for (int i=1; i<=num; i++) {
		res *= i;
	}
	return res;
}

int main() {

	int N, K;
	cin >> N >> K;

	int res = fac(N)/(fac(K) * fac(N-K));

	cout << res << endl;

	return 0;
}
