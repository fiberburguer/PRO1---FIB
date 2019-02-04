#include <iostream>
#include <string>
using namespace std;

int main() {
    string first;
    cin >> first;
    string seq;
    int max = 1;
    int cont = 1;
    while (cin >> seq) {
        if (first != seq) cont = 0;
        else {
            ++cont;
            if (cont > max) max = cont;
        }
    }
    cout << max << endl;
}