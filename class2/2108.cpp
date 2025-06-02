#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>
#include <algorithm>

using namespace std;

int sum(vector<int> v) {
	int sum = 0;	
	for (int i=0; i<v.size(); i++) {
		sum += v[i];
	}
	return sum;
}
int avg(int sum, int n) {
	return round((double)sum/n);
}
int median(vector<int> v) {
	int mid = v.size() / 2;	
	return v[mid];
}
int mode(vector<int> v) {
	unordered_map<int, int> freq; 
	for (int i=0; i<v.size(); i++) {
		freq[v[i]]++;
	}

	int maxFreq = 0; 
	for (auto& [num, count] : freq) {
		maxFreq = max(maxFreq, count);
	}

	vector<int> modes;
	for (auto& [num, count] : freq) {
		if (maxFreq == count) {
			modes.push_back(num);
		}
	}
	sort(modes.begin(), modes.end());

	if (modes.size() >=2 ) return modes[1];
	else return modes[0];
}
int gap(vector<int> v) {
	int start = 0;
	int end = v.size() - 1;
	return v[end] - v[start];
}
int main() {

	int N; 
	cin >> N; 

	vector<int> nums(N);
	for (int i=0; i<N; i++) {
		cin >> nums[i];
	}

	sort(nums.begin(), nums.end());

	cout << avg(sum(nums), N) << '\n';
	cout << median(nums) << '\n';
	cout << mode(nums) << '\n';
	cout << gap(nums) << '\n';
		
	return 0;
}
