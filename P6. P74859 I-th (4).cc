#include <iostream>
using namespace std;
 
int main() {
        int i, x;
        while (cin >> i) {
                bool trobat = false;
                int aux = i;
                x = 0;
                while (not trobat && i != 0 && x != -1) {
                        cin >> x;
                        if (x != -1) {
                                --i;
                                if (i == 0) trobat = true;
                        }
                }
                if (trobat) cout << "At the position " << aux << " there is a(n) " << x << '.' << endl;
                else cout << "Incorrect position." << endl;
                while (x != -1) cin >> x;
        }
}