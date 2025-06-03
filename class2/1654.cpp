#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long getMaxCableNum(const vector<long long>& cables, long long length) {
	int total = 0; 
	for (int i=0; i<cables.size(); i++) {
		total += cables[i]/length;
	}
	return total;
}

int main() {

	int K, N; 
	cin >> K >> N; 

	vector<long long> cables(K);

	long long maxLen = 0;
	for (int i=0; i<K; i++) {
		cin >> cables[i];
		maxLen = max(maxLen, cables[i]); // 최대 랜선 길이 
	}

	long long left = 1; 
	long long right = maxLen;
	long long result = 0;

	while (left <= right) {
		long long mid = (left + right) / 2; 
		long long num = getMaxCableNum(cables, mid); 

		if (num >= N) {
			result = mid;
			left = mid + 1;
		} else {
			right = mid - 1;
		}

	}

	cout << result << '\n';

	return 0;
}
