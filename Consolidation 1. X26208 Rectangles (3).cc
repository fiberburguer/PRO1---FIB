#include <iostream>
using namespace std;
 
int main () {
  int k,n,m;
  cin >> k >> n >> m;
 
  for(int x=0; x<k; ++x) {
    int j=9;
    for ( int i=0; i<n; ++i) {
      for( int i=0; i<m; ++i) {
    cout << j;
    if (j>0) {j--;}
    else j=9;
      }
      cout << endl;
    }
    if (x<k-1){cout << endl;}
  }
}