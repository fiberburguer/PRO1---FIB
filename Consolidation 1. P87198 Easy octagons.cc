#include <iostream>
using namespace std;
 
int main () {
    int n;
    while (cin >> n) {
        int le = n -1;
        int lx = n;
       
        for (int s = n - 1; s != 0; --s) {
            for (int e = le; e != 0; --e) cout << ' ';
            for (int x = lx; x != 0; --x) cout << 'X';
            cout << endl;
            lx = lx + 2;
            --le;
        }
       
        for (int s = n; s != 0; --s) {
            for (int e = lx; e != 0; --e) cout << 'X';
            cout << endl;
        }
       
        lx = lx - 2;
        le = 1;
        for (int s = n - 1; s != 0; --s) {
            for (int e = le; e != 0; --e) cout << ' ';
            ++le;
            for (int x = lx; x != 0; --x) cout << 'X';
            lx = lx - 2;
            cout << endl;
        }
        cout << endl;
    }
}