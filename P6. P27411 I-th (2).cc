#include <iostream>
using namespace std;

int main() {
    int i, seq, pos = 0;
    cin >> i;
    while (pos != i and cin >> seq and seq != -1 ) {
        ++pos;
    }
    if (i == 0) cout << "Incorrect position." << endl;
    else if (pos == i) cout << "At the position " << i << " there is a(n) " << seq << "." << endl;
    else cout << "Incorrect position." << endl;
}