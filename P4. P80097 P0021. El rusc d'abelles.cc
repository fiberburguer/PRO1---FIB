#include <iostream>
using namespace std;
 
 
void buits(int n) {
        if (n > 0) {
                cout<< " ";
                buits(--n);
        }
}
 
void pintar_rusc(int f, int c) {
        bool ini = true;
        while (f != 0) { //Cada fila
                //Top
                bool inici = true;
                if (ini) {
                        for (int i = c; i != 0; --i) {
                                if (inici) buits(1);
                                if (not inici) buits(3);
                                cout << "_";
                                inici = false;
                        }
                }
                ini = false;
                cout << endl;
                //MidAbove
                int k = c-1;
                for (int j = c; j != 0; --j) {
                        cout << "/";
                        buits(1);
                        cout << char(92);
                        if (k != 0) cout << "_";
                        --k;
                }
                cout << endl;
                //MidBelow
                int n = c-1;
                for (int m = c; m != 0; --m) {
                        cout << char(92) << "_" << "/";
                        if (n != 0) buits(1);
                        --n;
                }
                --f;
        }
        cout << endl;
}
 
 
int main() {
        int f, c;
        bool primer = true;
        while (cin >> f >> c) {
                if (not primer) cout << endl;
                pintar_rusc(f, c);
                primer = false;
        }
}