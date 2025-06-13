#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Point {
	int x;
	int y;
};

int N, M; 

vector<vector<char>> graph;
vector<vector<bool>> visited;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

int friends = 0;

void bfs(const Point& start) {
	queue<Point> q;
	q.push(start);
	visited[start.y][start.x] = true; // 시작지점 

	while (!q.empty()) {
		Point p = q.front();
		q.pop();
		for (int i=0; i<4; i++) {
			Point np;
			np.x = p.x + dx[i];
			np.y = p.y + dy[i];

			if ((np.x >= 0 && np.x < M && np.y >= 0 && np.y < N) && !visited[np.y][np.x]){
				char next = graph[np.y][np.x];	
				if (next == 'X') continue; 
				
				visited[np.y][np.x] = true;
				q.push(np);
				if (next == 'P') friends++;
			}
		}
	}
}

int main() {
	cin >> N >> M;

	Point p;	
	graph.resize(N);
	visited.resize(N, vector<bool>(M, false));
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			char ch;
			cin >> ch; 
			if (ch == 'I') {
				p.x = j;
				p.y = i;
			}
			graph[i].push_back(ch);
		}
	}

	bfs(p);

	if (friends == 0) {
		cout << "TT" << '\n';
	} else {
		cout << friends << '\n';
	}

	return 0;
}
