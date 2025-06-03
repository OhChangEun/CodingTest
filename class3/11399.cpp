#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

int main() {

	int N; 
	cin >> N; 

	vector<int> p(N);
	for (int i=0; i<N; i++) {
		cin >> p[i];
	}

	sort(p.begin(), p.end()); // 인출 시간이 가장 적은 사람부터 

	int sum = 0;
	int total = 0;
	for (int i=0; i<N; i++) {
		sum += p[i]; 
		total += sum;
	}

	cout << total << '\n';

	return 0;
}
