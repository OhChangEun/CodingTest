#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	
	int N, M;
	cin >> N >> M; 

	vector<int> trees(N);
	for (int i=0; i<N; i++) {
		cin >> trees[i];
	}
	
	int left = 0;
	int right = *max_element(trees.begin(), trees.end());
	int answer = 0;
	while (left <= right) {
		int mid = (left + right)/2;

		long long sum = 0;
		for (int tree : trees) {
			if (tree < mid) continue;
			sum += tree-mid;
		} 

		if (sum >= M) {
			answer = mid;
			left = mid+1;
		} else {
			right = mid-1;
		}
	}
	
	cout << answer << '\n';
	
	return 0;
}
