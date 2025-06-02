#include <iostream>
#include <stack>
#include <vector>

using namespace std; 

int main() {

	int n;
	cin >> n;

	vector<int> v(n); 
	for (int i=0; i<n; i++) {
		cin >> v[i];
	}

	stack<int> s;
	vector<char> res;
	int index = 1;	
	bool isGood = true;

	for (int i=0; i<n; i++) {
		int target = v[i];

		while (index <= target) {
			s.push(index);
			index++;
			res.push_back('+');
		}
		if (s.top() == target) {
			s.pop();
			res.push_back('-');
		} else {
			isGood = false;
			break;
		}

	}

	if (isGood) {
		for (const char& item: res) {
			cout << item << '\n';	
		}
	} else {
		cout << "NO" << '\n';
	}

	return 0;
}
