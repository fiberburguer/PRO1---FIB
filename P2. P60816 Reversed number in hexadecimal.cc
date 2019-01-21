#include <iostream>
using namespace std;
 
int main() {
    int n;
    const int BASE = 16;
    cin >> n;
    if( n != 0 ) {
        while (n > 0) {
            if( n%BASE < 10) cout << n%BASE;
            else cout << char('A' + n%BASE - 10);
            n = n/BASE;
        }
    }else cout << 0;
    cout << endl;
}