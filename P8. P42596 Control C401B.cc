#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matrix;

void minmax(const Matrix&m, int&min, int&max){
  max = min = m[0][0];
  for (int i=0; i<m.size() ; ++i){
    for(int j=0; j<m[0].size() ; ++j){
      if (m[i][j]> max) max= m[i][j];
      if (m[i][j]< min) min= m[i][j];
    }
  }
}

int main(){
  int r,c;
  int min,max;
  min = max = 0;
  
  int number = 0;
  int maxnumber = 0;
  int dif = -1;
  
  while (cin >> r >> c){
    Matrix m(r, vector<int>(c));
    for (int i=0; i<r; ++i){
      for ( int j=0; j<c; ++j){
	cin >> m[i][j];
      }
    }
  
  minmax(m,min,max);
  ++number;
  
  if((max-min) > dif){
    dif = max-min;
    maxnumber = number;
  }
  }
  
  cout << "la diferencia maxima es " << dif << endl;
  cout << "la primera matriu amb aquesta diferencia es la " << maxnumber << endl;
}
   
