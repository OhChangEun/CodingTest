#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int N; // 계단 개수 
	cin >> N; 

	vector<int> scores(N); // 계단 별 점수 
	for (int i=0; i<N; i++) {
		cin >> scores[i];
	}

	vector<int> dp(N);
	
	dp[0] = scores[0];
	dp[1] = scores[0] + scores[1];
	dp[2] = max(scores[0]+scores[2], scores[1]+scores[2]);

	for (int i=3; i<N; i++) {
		dp[i] = max(dp[i-2]+scores[i], dp[i-3]+scores[i-1]+scores[i]);
	}

	cout << dp[N-1] << '\n';

	return 0;
}
