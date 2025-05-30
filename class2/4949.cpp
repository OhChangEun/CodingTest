#include <iostream>
#include <stack>
#include <map>

using namespace std; 

int main() {

	map<char, char> brackets;
	brackets['['] = ']';
	brackets['('] = ')';

	while (true) {
		stack<char> s;
		
		string inputStr; 
		getline(cin, inputStr);
		
		if (inputStr == ".") {
			break;
		}

		bool isBalanced = true; 
		for (char ch : inputStr) {
			if (ch == '(' || ch == '[') {
				s.push(ch);
			} else if (ch == ')' || ch == ']'){
				if (!s.empty() && brackets[s.top()] == ch) {
					s.pop();
				} else {
					isBalanced = false;
					break;
				}
			}
		}

		string res = (s.empty() && isBalanced ? "yes" : "no");
		cout << res << '\n';

	}

	return 0;
}
