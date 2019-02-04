#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n;
    while (cin>>n) {
        if (n>0) {
            vector <int> v (n);
            for (int i=0; i<n; i++) cin>>v[i];
            for (int i=n-1; i>0; i--) cout<<v[i]<<" ";
            cout<<v[0]<<endl;
        }
        else cout<<endl;
    }
}