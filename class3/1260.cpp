#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

void DFS(int num, const vector<vector<int>>& graph, vector<bool>& visited) {
	cout << num << " ";
	visited[num] = true; 

	for (int next : graph[num]) {
		if (!visited[next]) 
			DFS(next, graph, visited);
	}
}

void BFS(int start, const vector<vector<int>>& graph, vector<bool>& visited) {
	queue<int> q; 

	visited[start] = true;
	cout << start << " ";
	q.push(start);

	while (!q.empty()) {
		int curr = q.front();
		q.pop();

		for (int next : graph[curr]) {
			if (!visited[next]) {
				q.push(next);
				visited[next] = true; 
				cout << next << " ";
			}
		}
	}
	cout << '\n';
}


int main() {

	int N, M, V; 
	cin >> N >> M >> V;

	vector<vector<int>> graph(N+1);
	vector<bool> dfsVisited(N+1, false);
	vector<bool> bfsVisited(N+1, false);

	for (int i=0; i<M; i++) {
		int start, end; 
		cin >> start >> end;

		graph[start].push_back(end);
		graph[end].push_back(start);
	}

	for (int i=1; i<=N; i++) {
		sort(graph[i].begin(), graph[i].end());
	}

	DFS(V, graph, dfsVisited);
	cout << '\n';
	BFS(V, graph, bfsVisited);

	return 0;
}
