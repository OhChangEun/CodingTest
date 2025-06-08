#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> graph;
vector<bool> visited;
int count = 0;

void DFS(int node) {
	count++;
	visited[node] = true; 

	for (int next : graph[node]) {
		if (!visited[next])
			DFS(next);
	}
}

void BFS(int start) {
	queue<int> q;
	q.push(start);
	visited[start] = true;
	int count = 0;
	while (!q.empty()) {
		int curr = q.front();
		q.pop();
		count++;

		for (int next : graph[curr]) {
			if (!visited[next]) {
				visited[next] = true;
				q.push(next);
			}
		}
	}
	cout << count-1 << '\n';
}

int main() {

	int N;
	cin >> N; 
	graph.resize(N+1);
	visited.resize(N+1, false);

	int P; 
	cin >> P; 

	for (int i=0; i<P; i++) {
		int start, end;
		cin >> start >> end; 
		
		graph[start].push_back(end);
		graph[end].push_back(start);
	}

	BFS(1);
	// cout << count-1 << '\n';

	return 0;
}
