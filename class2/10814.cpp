#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

typedef struct {
	int age;
	int index;
	string name;
}user;

bool compare(const user& a, const user& b) {
	if (a.age != b.age) 
		return a.age < b.age; 
	return a.index < b.index;
}

int main() {

	int N; 
	cin >> N; 

	vector<user> users(N);
	
	for (int i=0; i<users.size(); i++) {
		cin >> users[i].age >> users[i].name;
		users[i].index = i;
	}

	sort(users.begin(), users.end(), compare);

	for (const user& u : users) {
		cout << u.age << " " << u.name << endl;
	}
	

	return 0;
}
