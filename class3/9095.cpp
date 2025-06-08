#include <iostream>
#include <vector>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	const int SIZE = 12; 

	int T; 
	cin >> T; 

	vector<int> dp(SIZE);
	dp[1] = 1; 
	dp[2] = 2;
	dp[3] = 4;
	for (int i=4; i<SIZE; i++) {
		dp[i] = dp[i-3] + dp[i-2] + dp[i-1];
	}

	for (int i=0; i<T; i++) {
		int input; 
		cin >> input; 

		cout << dp[input] << '\n';
	}

	return 0;
}
