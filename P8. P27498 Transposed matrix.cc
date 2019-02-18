#include <iostream>
#include <vector>
using namespace std;
typedef vector< vector<int> > Matrix;
 
void Swap(int&a, int&b) {
    int c=a;
    a=b;
    b=c;
}
 
void transpose(Matrix& m) {
    int n=m.size();
    for (int i=0; i<n; ++i) for (int j=i+1; j<n; ++j) Swap(m[i][j],m[j][i]);
}
 
