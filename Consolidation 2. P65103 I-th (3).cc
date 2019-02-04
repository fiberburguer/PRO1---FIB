#include <iostream>
using namespace std;

int main() {
    int n, seq, pos = 1;
    cin >> n;
    bool found = false;
    while (not found and cin >> seq) {
        if (pos == n) found = true;
        else ++pos;
    }
    if (found) cout << "At the position " << n << " there is a(n) " << seq << "." << endl;
    else cout << "Incorrect position." << endl;
}