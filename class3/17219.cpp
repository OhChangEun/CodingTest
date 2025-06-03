#include <iostream>
#include <unordered_map>

using namespace std; 

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M; 
	cin >> N >> M; 

	unordered_map<string, string> pwdMap; 
	for (int i=0; i<N; i++) {
		string url, pwdStr; 
		cin >> url >> pwdStr;
		pwdMap[url] = pwdStr;
	}

	for (int i=0; i<M; i++) {
		string targetUrl; 
		cin >> targetUrl;
		cout << pwdMap[targetUrl] << '\n';
	}

	return 0;
}
