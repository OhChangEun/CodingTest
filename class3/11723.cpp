#include <iostream>
#include <unordered_set>
#include <sstream>

using namespace std; 

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string M; 
	getline(cin, M); 

	unordered_set<int> uset; 
	for (int i=0; i<stoi(M); i++) {
		string input; 	
		getline(cin, input); 

		istringstream iss(input);
		string command; 
		int number;

		iss >> command;

		if (iss >> number) {
			if (command == "add") {
				uset.insert(number);
			}
			else if (command == "remove") {
				uset.erase(number);
			}
			else if (command == "check") {
				if (uset.find(number) != uset.end()) 
					cout << 1 << '\n';
				else 
					cout << 0 << '\n';
			}
			else if (command == "toggle") {
				if (uset.find(number) != uset.end()) {
					uset.erase(number);
				} else {
					uset.insert(number);
				}
			}
		}
		else {
			if (command == "all") {
				uset.clear();
				for (int i=1; i<=20; i++) {
					uset.insert(i);
				}
			}
			else if (command == "empty") {
				uset.clear();
			}
		}

	}

	return 0;
}
