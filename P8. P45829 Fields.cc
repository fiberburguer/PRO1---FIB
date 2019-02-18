#include <iostream>
#include <vector>
using namespace std;
 
typedef vector< vector<int> > Matrix;
 
int main(){
    int nrows, ncols;
 
    while (cin >> nrows >> ncols){
        int count = 0;
       
        Matrix field(nrows, vector<int>(ncols));
       
        for (int i=0; i<nrows; ++i){
            for (int j=0; j<ncols; ++j){
                cin >> field[i][j];
            }
        }
       
        for (int i=0; i<nrows; ++i){
            for (int j=0; j<ncols; ++j){
               
                if (field[i][j]!=0){
                    ++count;
                    int r=0, d=0;
                    for (int ii=i; ii<nrows  and field[ii][j]>0; ++ii) ++d;
                    for (int jj=j; jj<ncols and field[i][jj]>0; ++jj) ++r;
                   
                   
                    for (int h=0; h<d; ++h){
                        for (int v=0; v<r; ++v){
                            field[i+h][j+v] = 0;
                        }
                    }
                }
            }
        }
       
    cout << count << endl;
    }
}
