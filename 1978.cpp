#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(int num) {
  if (num < 2) return false;
  for (int i = 2; i <= sqrt(num); i++) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int N;
  cin >> N;

  vector<int> input(N, 0);
  for (int i = 0; i < N; i++) {
    cin >> input[i];
  }

  int result = 0;
  for (int i = 0; i < N; i++) {
    if (isPrime(input[i])) {
      result++;
    }
  }
  cout << result << endl;

  return 0;
}
