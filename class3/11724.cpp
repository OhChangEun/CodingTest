#include <iostream>
#include <vector>

using namespace std; 

vector<vector<int>> graph;
vector<bool> visited;

void dfs(int num) {
	visited[num] = true; 
	for (int next : graph[num]) {
		if (!visited[next]) {
			dfs(next);
		}
	}
}

int main() {

	int N, M; 
	cin >> N >> M;

	graph.resize(N+1);
	visited.resize(N+1, false);

	while (M--) {
		int x, y;
		cin >> x >> y; 

		graph[x].push_back(y);
		graph[y].push_back(x);
	}

	int count = 0;
	for (int i=1; i<=N; i++) {
		if (!visited[i]) {
			dfs(i);
			count++;
		}
	}

	cout << count << '\n';

	return 0;
}
