#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> paper;
int blueCount = 0;
int whiteCount = 0;

// 0~3, 0~3 | 0~3, 4~7
// 4~7, 0~3 | 4~7, 4~7
void cut(int x, int y, int size) {
	bool isAllBlue = true; 
	bool isAllWhite = true;
	
	for (int i=x; i<x+size; i++) {
		for (int j=y; j<y+size; j++) {
			if (paper[i][j] == 1) isAllWhite = false;
			if (paper[i][j] == 0) isAllBlue = false;
		}
	}
	if (isAllWhite) {
		whiteCount++;
	} else if (isAllBlue) {
		blueCount++;
	} else {
		int half = size / 2; 
		cut(x, y, half);
		cut(x+half, y, half);
		cut(x, y+half, half);
		cut(x+half, y+half, half);
	}
}


int main() {
	int N; 
	cin >> N; 
	paper.resize(N);

	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			int num;
			cin >> num; 
			paper[i].push_back(num);
		}
	}

	cut(0, 0, N);

	cout << whiteCount << '\n';
	cout << blueCount << '\n';

}
