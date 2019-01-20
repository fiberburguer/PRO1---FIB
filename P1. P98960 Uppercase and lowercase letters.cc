#include <iostream>
using namespace std;
 
int main () {
    char c;
    cin >> c;
    if (islower(c)) {
        c=toupper(c);
    }
    else {
        c=tolower(c);
    }
    cout << c << endl;
}