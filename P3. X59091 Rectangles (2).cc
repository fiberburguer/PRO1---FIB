#include <iostream>
using namespace std;
 
int main() {
    int n, m, s;
    cin >> n >> m;
    s = 9;
    while (n>0) {
       
        for (int m2=m; m2>0; m2--) {
            cout << s;
            s--;
            if (s<0) s=9;
        }
        cout << endl;
        n--;
    }
    while (cin >> n >> m) {
        s = 9;
        cout << endl;
        while (n>0) {
            for (int m2=m; m2>0; m2--) {
                cout << s;
                s--;
                if (s<0) s=9;
            }
            cout << endl;
            n--;
        }
    }
}