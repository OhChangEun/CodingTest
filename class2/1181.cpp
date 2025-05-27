#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

bool compare(const string& a, const string& b){
	if (a.length() != b.length())
		return a.length() < b.length();
	return a < b;
}

int main() {
	int N; 
	cin >> N; 

	set<string> wordSet;
	for (int i=0; i<N; i++) {
		string word;
		cin >> word;
		wordSet.insert(word);
	}

	vector<string> words(wordSet.begin(), wordSet.end());
	sort(words.begin(), words.end(), compare);

	for (const string& word : words) {
		cout << word << "\n";
	}

	return 0;

}
