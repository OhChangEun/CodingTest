#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	string inputStr; 
	
	while(1) {
		cin >> inputStr; 

		if (inputStr == "0") break; 

		int n = inputStr.length();
		int mid = n/2;

		string left = inputStr.substr(0, mid);
		string right = (n%2==0) ? inputStr.substr(mid) : inputStr.substr(mid+1);

		reverse(right.begin(), right.end());

		string res = (left == right) ? "yes" : "no";
		cout << res << endl;
	}

	return 0;
}
