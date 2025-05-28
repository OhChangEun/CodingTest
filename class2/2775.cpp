#include <iostream>
#include <vector>

using namespace std;

int func(vector<vector<int>>& dp, int k, int n) {
	if (k==0) return n; 
	if (n==1) return 1; 

	if (dp[k][n] != 0) return dp[k][n]; // 이미 값이 메모되어 있으면 리턴

	dp[k][n] = func(dp, k-1, n) + func(dp, k, n-1);
	return dp[k][n];
}


int main() {
	int T;
	cin >> T; 

	for (int i=0; i<T; i++) {
		int k, n;
		cin >> k >> n;

		vector<vector<int>> dp(k+1, vector<int>(n+1,0));

		cout << func(dp, k, n) << '\n';

	}

	return 0;
}
