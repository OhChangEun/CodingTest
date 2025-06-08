#include <iostream>
#include <vector>

using namespace std; 

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M; 
	cin >> N >> M; 

	vector<int> nums(N);
	for (int i=0; i<N; i++) {
		cin >> nums[i];
	}

	vector<int> sums(N+1);
	sums[0] = 0;	
	for (int i=1; i<=N; i++) {
		sums[i] = sums[i-1] + nums[i-1];
	}

	for (int i=0; i<M; i++) {
		int start, end; 
		cin >> start >> end; 
		
		int result = sums[end]-sums[start-1];
		cout << result << '\n';
	}

	return 0;
}
