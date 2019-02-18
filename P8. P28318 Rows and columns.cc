#include <iostream>
#include <vector>
using namespace std;
 
typedef vector<vector<int> > matrix;
 
int main() {
    int x,y,n,n2;
    cin>>x>>y;
    matrix m(x,vector <int> (y,0));
    for (int i=0;i<x;++i) {
        for (int j=0; j<y;++j) {
            cin>>m[i][j];
        }
    }
    string s;
    while (cin>>s) {
        if (s=="row") {
            cin>>n;
            cout<<"row "<<n<<":";
            for (int i=0; i<y; ++i) cout<<" "<<m[n-1][i];
            cout<<endl;
        }
        else if (s=="column") {
            cin>>n;
            cout<<"column "<<n<<":";
            for (int i=0; i<x; ++i) cout<<" "<<m[i][n-1];
            cout<<endl;
        }
        else if (s=="element") {
            cin>>n>>n2;
            cout<<"element "<<n<<" "<<n2<<": "<<m[n-1][n2-1]<<endl;
        }
    }
}
 
