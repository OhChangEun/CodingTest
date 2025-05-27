#include <iostream>

using namespace std;

int sum(int n) {
   int result = 0;

   while(n>0) {
      result += n%10;
      n/=10;
   }

   return result;

}

int main() {

   int N;
   cin >> N;

   bool isExist = false;
   for (int i=0; i<=N; i++) {
      if (N == (i+sum(i))) {
         cout << i << endl;
         isExist = true;
         break;
      }
   }

   if (!isExist) {
      cout << 0 << endl;
   }

   return 0;
}

