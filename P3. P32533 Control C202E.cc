#include <iostream>
using namespace std;
 
int main () {
    int n;
    cin >> n;
    for (int j=1; j<=n; j++) {
        for (int i=(n-j); i>0; i--) cout << '+';
        cout<< '/';
        for (int i=(j-1); i>0; i--) cout << '*';
        cout << endl;
    }
}