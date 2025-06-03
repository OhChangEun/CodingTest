#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std; 

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M; 
	cin >> N >> M;

	unordered_map<string, bool> map; 

	for (int i=0; i<N; i++) {
		string input; 
		cin >> input; 
		map[input] = true;
	}

	int count = 0;
	vector<string> first;
	for (int i=0; i<M; i++) {
		string input; 
		cin >> input;
		if (map[input]) {
			first.push_back(input);
			count++;
		}
	}

	sort(first.begin(), first.end());
	
	cout << count << '\n';
	for (const string& item: first) {
		cout << item << '\n';
	}

	return 0;
}
