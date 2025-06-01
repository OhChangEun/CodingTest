#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n; 
	cin >> n;

	if (n==0) {
		cout << 0 << endl; 
		return 0;
	}

	vector<int> v(n);
	for (int i=0; i<n; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end()); // 오름차순 정렬


	int sum = 0;
	int index = round(n*0.15);

	for (int i=index; i<n-index; i++) {
		sum += v[i];
	}
	cout << round((double)sum/(n-index-index)) << '\n';

	return 0;
}
