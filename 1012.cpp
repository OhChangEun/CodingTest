#include <iostream>
#include <vector>

int T, N, M, K;
vector<vector<int>> field;
vector<vector<bool>> visited;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

int main() {
	cin >> T;

	for (int i=0; i<T; i++) {
		cin >> M > N >> K;	
		
		field = vector<vector<int>>(N, vector<int>(M,0));	
		visited = vector<vector<bool>>(N, vector<bool>(M, false));

		for (int i=0; i<K; i++) {
			int x, y;
			cin >> x >> y; 
			field[y][x] = 1;
		}

		int wormCount = 0;

	}




	return 0;
}
