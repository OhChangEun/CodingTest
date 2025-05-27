#include <iostream>

using namespace std;

int main() {

	int N; 
	cin >> N; 

	int zeroNum = 0; 

	for (int i=5; i<=N; i*=5) {
		zeroNum += N/i;
	}

	cout << zeroNum << endl;

	return 0;
}
