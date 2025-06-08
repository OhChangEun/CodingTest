#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {

	int T;
	cin >> T; 

	for (int i=0; i<T; i++) {
		int n; 
		cin >> n; 

		unordered_map<string, int> clothes;
		for (int j=0; j<n; j++) {
			string name, type; 
			cin >> name >> type; 
			clothes[type]++;
		}

		int count = 1;
		for (const auto& [type, num] : clothes) {
			count *= (num + 1);
		}

		cout << count-1 << '\n';
	}

	return 0;
}
