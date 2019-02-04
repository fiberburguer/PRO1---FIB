   
#include <iostream>
#include <vector>
using namespace std;

typedef  vector<vector<int> > Mat;

Mat llegirMat(int n, int m) {
   Mat A(n, vector<int>(m));
   for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
         cin >> A[i][j];
      }
   }
   return A;
}

int suma(Mat A, int i){
  int sum = 0;
  for( int j=0;j<A[i].size();++j){
    sum += A[i][j];
  }
  if (sum == 0) return 0;
  else return sum;
}
    // IF YOU WRITE NEW FUNCTIONS/PROCEDURES, ADD THEM HERE

bool sumes_decreixents (const Mat & A){
  int sum = 0;
  int sumant = 0;
  for(int i=0; i<A.size();++i){
    sumant = suma(A,i);
    if (i!=0 and (sumant >= sum)) return false;
    sum = sumant;
  }
return true;
}

int main() {
   int n,m;
   while (cin >> n >> m) {
      Mat A = llegirMat(n,m);
      if (sumes_decreixents(A)) cout << "YES" << endl;
      else cout << "NO" << endl;
   }
}