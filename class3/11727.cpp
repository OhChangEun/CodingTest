#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; 
	cin >> n;

	vector<int> dp(n+1);
	dp[1] = 1; 
	dp[2] = 3;
	for (int i=3; i<=n; i++) {
		dp[i] = (dp[i-1] + (dp[i-2]*2)) % 10007;
	}
	cout << dp[n] % 10007 << '\n';

	return 0;
}
