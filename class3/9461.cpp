#include <iostream>
#include <vector>

using namespace std;

int main() {

	const int SIZE = 101;
	int N; 
	cin >> N; 
	
	vector<long long> dp(SIZE+1);
	dp[1] = 1; 
	dp[2] = 1; 
	dp[3] = 1; 
	dp[4] = 2; 
	dp[5] = 2; 

	for (int i=6; i<=SIZE; i++) {
		dp[i] = dp[i-5] + dp[i-1];
	}

	for (int i=0; i<N; i++) {
		long long num; 
		cin >> num; 
		cout << dp[num] << '\n';
	}

	return 0;
}
