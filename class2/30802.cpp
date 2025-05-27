#include <iostream>
#include <vector>

using namespace std;

int main() {

   int N;
   vector<int> items(6, 0);
   int T, P;

   cin >> N;
   for (int i=0; i<items.size(); i++) {
      cin >> items[i];
   }
   cin >> T >> P;

   int shirtsNum = 0;
   for (int i=0; i<items.size(); i++) {
      if (items[i]%T == 0) shirtsNum += items[i]/T;
      else shirtsNum += items[i]/T + 1;
   }

   cout << shirtsNum << endl;
   cout << N/P << " " << N%P << endl;

   return 0;
}
