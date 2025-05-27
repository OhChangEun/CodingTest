#include <iostream>

using namespace std; 

int main() {

	int N;
	cin >> N; 
	int idx = 0; // 몇번째 바퀴인지 
	int sum = 1;

	while (sum < N) {
		sum = sum + 6*idx;
		idx++;
	}

	cout << idx << endl;
	
	return 0;
}
