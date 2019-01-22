#include <iostream>
using namespace std;
 
int main() {
    int n, m, s;
    cin >> n >> m;
    s = ((n+m)%5);
    while (n>0) {
        for (int m2=m; m2>0; m2--) {
            cout << s;
        }
        cout << endl;
        n--;
    }
    while (cin >> n >> m) {
        s = ((n+m)%5);
        cout << endl;
        while (n>0) {
            for (int m2=m; m2>0; m2--) {
                cout << s;
            }
            cout << endl;
            n--;
        }
    }
}