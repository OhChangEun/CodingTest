#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	
	int N; 
	cin >> N; 


	int bag5 = 5; 
	int bag3 = 3;

	bool isComb = false;
	int minNum = 5001; 
	for (int i=0; i<=N/5; i++) {
		for (int j=0; j<=N/3; j++) {
			if (((i*5)+(j*3)) == N) {
				minNum = min(minNum, i+j);
				isComb = true;
			}
		}
	}

	int res = isComb ? minNum : -1;
	cout << res << '\n';

	return 0;
}
