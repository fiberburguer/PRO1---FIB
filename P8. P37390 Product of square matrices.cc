#include <iostream>
#include <vector>
using namespace std;
typedef vector<vector<int> > Matrix;
 
Matrix product(const Matrix& a, const Matrix& b) {
    int size=a.size();
    Matrix c(size,vector <int> (size));
    for (int i=0; i<size; ++i) for (int j=0; j<size; ++j) {
        int n=0;
        for (int k=0; k<size; ++k) n = n + (a[i][k] * b[k][j]);
        c[i][j] = n;
    }
    return c;
}
