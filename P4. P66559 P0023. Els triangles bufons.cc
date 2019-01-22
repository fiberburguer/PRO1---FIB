#include <iostream>
using namespace std;
 
 
void buits(int n) {
    if (n > 0) {
        cout << " ";
        buits(--n);
    }
}
 
void escriu_triangle(int t) {
    for (int i = 1; i <= t*2; ++i) {
        buits(t*2 - i);
        if (i%2 != 0) {
            for (int j = 1; j <= (i/2) + 1; ++j) {
                if (j != 1) cout << "  ";
                cout << "/\\";
            }
        }
        else {
            for (int j = 1; j <= i/2; ++j) {
                cout << "/__\\";
            }
        }
        cout << endl;
    }
    cout << endl;
}
 
int main() {
    int x;
    while (cin >> x && x > 0) {
        escriu_triangle(x);
    }
}