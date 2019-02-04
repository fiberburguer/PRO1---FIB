#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<int> > Matrix;
  

int main(){
  int n,m;
  while (cin >> n >> m){
    Matrix a(n,vector<int>(m));
    for(int i = 0;i<n;++i){
      for(int j= 0;j<m;++j){
	cin >> a[i][j];
      }
    }
    int rowmax = 0;
    int count = 0;
    int anterior = 0;
    for(int i=0;i<a.size();++i){
      for(int j=0;j<a[0].size();++j){
	count += a[i][j];
      }
      if (count > anterior){
	rowmax = i;
	anterior = count;
      }
      count = 0;
    }
   cout << "Row: " << rowmax << endl; 
  }
}