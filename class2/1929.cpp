#include <iostream>
using namespace std;

bool isPrime(int num) {

	// 0,1 예외처리
	if (n<2) return false;
	
	// O(N*N) >> O(N*루트(N))
	for (int i=2; i*i <= num; i++) {
		if (num % i == 0)
			return false;
	}
	return true;
}

int main() {

	int M, N;
	cin >> M >> N; 

	for (int i=M; i<=N; i++) {
		if (isPrime(i))
			cout << i << '\n';
	}

	return 0;
}
