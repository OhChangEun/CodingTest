#include <iostream>
#include <unordered_map>

using namespace std; 

bool isNumber(const string& str) {
	for (char c: str) {
		if (!isdigit(c)) return false;
	}
	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	
	int N, M;
	cin >> N >> M; 
	
	unordered_map<int, string> numToName; 
	unordered_map<string, int> nameToNum; 

	for (int i=1; i<=N; i++) {
		string input;
		cin >> input; 

		numToName[i] = input;
		nameToNum[input] = i;
	}

	for (int i=0; i<M; i++) {
		string input;
		cin >> input;

		if (isNumber(input)) {
			int num = stoi(input);
			cout << numToName[num] << '\n';
		} else { 
			cout << nameToNum[input] << '\n';
		}
	}

	return 0;
}
