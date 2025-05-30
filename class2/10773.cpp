#include <iostream>
#include <stack>

using namespace std; 

int main() {

	stack<int> s;

	int K;
	cin >> K; 

	for (int i=0; i<K; i++) {
		int num;
		cin >> num; 

		if (num == 0) {
			if (!s.empty()) s.pop(); 
		} else {
			s.push(num);
		}


	}
	
	int sum = 0;
	
	while(true) {
		if (s.empty()) break;

		sum += s.top();
		s.pop();
	}
	
	cout << sum << '\n';

	return 0;
}
