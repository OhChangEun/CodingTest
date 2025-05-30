#include <iostream>

using namespace std; 

int main() {

	string word = "666";
	
	int N; 
	cin >> N; 

	int num = 666; 
	int count = 0;

	while(1) {
		// find 666
		if(to_string(num).find(word) != string::npos) {
			count++;
			if (count == N) {
				cout << num << endl;
				break;
			}
		}
		num++;
	}

	return 0;
}
