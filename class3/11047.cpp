#include <iostream>
#include <vector>

using namespace std; 

int main() {
	
	int N, K; 
	cin >> N >> K;

	vector<int> wons(N);
	for (int i=0; i<N; i++) {
		cin >> wons[i];
	}

	int count = 0;
	for (int i=wons.size()-1; i>=0; i--) {
		if (K < wons[i]) { // 4790 < 5000
			continue;
		}
		if (K == 0) {
			break;	
		}
		count += K / wons[i];
		K %= wons[i];
	}
	cout << count << '\n';

	return 0;
}
