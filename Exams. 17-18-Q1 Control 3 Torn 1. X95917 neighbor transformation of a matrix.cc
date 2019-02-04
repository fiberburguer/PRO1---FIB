#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Mat;

Mat llegirMat(int n, int m) {
   Mat A(n, vector<int>(m));
   for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
         cin >> A[i][j];
      }
   }
   return A;
}

void escriureMat(const Mat &A) {
   for (int i = 0; i < A.size(); ++i) {
      cout << A[i][0];
      for (int j = 1; j < A[i].size(); ++j) cout << " " << A[i][j];
      cout << endl;
   }   
}

// IF YOU WRITE NEW FUNCTIONS/PROCEDURES, ADD THEM HERE

void trafo_veins (Mat& A) {
    Mat B = A;
    int k = A[0].size();
    --k;
    for(int i=0;i<A.size();++i){
      for(int j=0;j<A[0].size();++j){
	if(j==0){
	  A[i][j] = B[i][j+1];
	}
	if(j == k){
	  A[i][j] = B[i][j-1];
	}
	else{
	  A[i][j] = B[i][j-1] + B[i][j+1];
	}
      }
    }
}


int main() {
   int n,m;
   while (cin >> n >> m) {
      Mat A = llegirMat(n,m);
      trafo_veins(A);
      escriureMat(A);
      cout << endl;
   }
}