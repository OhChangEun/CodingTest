#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {

	int A, B; 
	cin >> A >> B; 
	
	if (A<B) 
		swap(A,B);

	int GCD = 1;
	
	for (int i=B; i>1; i--) {
		if ((A%i==0) && (B%i==0)) {
			GCD = i;
			break;
		}
	}
	
	cout << GCD << endl;
	cout << GCD * (A/GCD) * (B/GCD) << endl;


	return 0;
}
