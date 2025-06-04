#include <iostream>
#include <vector>

using namespace std; 

struct Count {
	int zero;
	int one;
};

void fib(int n) {
	vector<Count> dp(n+1);
	
	dp[0].zero = 1;
	dp[0].one = 0; 

	dp[1].zero = 0;
	dp[1].one = 1;
	
	for (int i=2; i<=n; i++) {
		dp[i].zero = dp[i-1].zero + dp[i-2].zero;
		dp[i].one = dp[i-1].one + dp[i-2].one;
	}

	cout << dp[n].zero << " " << dp[n].one << '\n';
}


int main() {

	int T; 
	cin >> T;

	
	for (int i=0; i<T; i++) {
		int num;	
		cin >> num;

		fib(num);
	}

	return 0;
}
