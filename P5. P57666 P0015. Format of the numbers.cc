#include <iostream>
using namespace std;
 
void en_base(int n, int b) {
    if (n >= b) {
        en_base(n/b, b);
        cout << n%b;
    }
    else if (n < b) {
        cout << n;
    }
}
 
void nombre_digits(int n, int b, int& digitos) {
    if (n >= b) {
        nombre_digits(n/b, b, digitos);
        ++digitos;
    }
    else if (n < b) ++digitos;
}
 
int main(){
    int n, b, c;
    while (cin >> n >> b >> c) {
        int digitos = 0;
        nombre_digits(n, b, digitos);
        if (digitos > c) {
            for (int i = 0; i < c; ++i) cout << '*';
            cout << endl;
        }
        else if (digitos < c) {
            for (int i = 0; i < (c - digitos); ++i) cout << '#';
            en_base(n, b);
            cout << endl;
        }
        else {
            en_base(n, b);
            cout << endl;
        }
    }
}