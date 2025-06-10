#include <iostream>
#include <vector>

using namespace std;

int main() {

	string inputStr; 
	cin >> inputStr; 

	vector<int> nums;
	vector<char> operators;

	string currStr = "";
	for (char c : inputStr) {
		if (c == '+' || c == '-') {
			nums.push_back(stoi(currStr));
			operators.push_back(c);
			currStr = "";
		} else {
			currStr += c;
		}
	}
	nums.push_back(stoi(currStr));

	int result = nums[0];
	bool minusMode = false;
	for (int i=0; i<operators.size(); i++) {
		if (operators[i] == '-') {
			minusMode = true;
		}

		if (minusMode) {
			result -= nums[i+1];
		} else {
			result += nums[i+1];
		}
	}

	cout << result << '\n';

	return 0;
}

