#include <iostream>
#include <queue>

using namespace std;

int main() {

	string input; 
	// cin.ignore();
	getline(cin, input);
	int N = stoi(input);

	queue<int> q; 
	
	for (int i=0; i<N; i++) {
		string op; 
		getline(cin, op); 

		if (op.find("push") != string::npos) {
			int num = stoi(op.substr(5));
			q.push(num);
		} else {
			if (op == "front") {
				
				cout << (q.empty() ? -1 : q.front()) << endl;
			} else if (op == "back") {
				cout << (q.empty() ? -1 : q.back()) << endl;
			} else if (op == "size") {
				cout << q.size() << endl;
			} else if (op == "empty") {
				cout << q.empty() << endl;
			} else if (op == "pop") {
				cout << (q.empty() ? -1 : q.front()) <<endl;
				if (!q.empty()) 
					q.pop();
			}
		}
	}

	return 0;
}
