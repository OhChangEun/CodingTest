#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isRightTriangle(int a, int b, int c) {
   return c*c == a*a + b*b;
}

int main() {

   int a, b, c;

   vector<int> triangle;
   while(1) {
      cin >> a >> b >> c;
      if ((a==0) && (b==0) && (c==0)) break;

      triangle.push_back(a);
      triangle.push_back(b);
      triangle.push_back(c);

      sort(triangle.begin(), triangle.end());

      string result = isRightTriangle(triangle[0], triangle[1], triangle[2]) ? "right" : "wrong";
      cout << result << endl;

      triangle.clear();
   }

   return 0;
}



