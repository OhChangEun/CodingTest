#include <iostream>
#include <vector>

using namespace std;

int main() {

	int K, N; 
	cin >> K >> N; 

	vector<int> nums(K);
	for (int i=0; i<K; i++) {
		cin >> nums[i];
	}

	int sum = 0;
	for (int i=0; i<K; i++) {
		sum += nums[i];
	}

	int maxLen = sum/N;

	for (int i=1; i<=maxLen; i++) {
		int totalNum = 0;
		for (int j=0; j<K; j++) { // 모든 선에 대해 
			totalNum += nums[j]/i;
		}
		if (totalNum >= N) {
			cout << i << '\n';
			break;
		}
	}
	
	return 0;
}
