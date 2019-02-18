#include<iostream>
#include<vector>
using namespace std;
 typedef vector< vector <int> > Matrix;
 
Matrix product (const Matrix& a, const Matrix& b) {
  Matrix c (a.size(), vector<int> (b[0].size()));
  int sum = 0;
  for (int i = 0; i < a.size(); ++i) {
    for (int j = 0; j < b[0].size(); ++j) {
      for(int k = 0; k < b.size(); ++k) {
        sum = c[i][j] + a[i][k] * b[k][j];
        c[i][j] = sum;
      }
    }
  }
  return c;
}
