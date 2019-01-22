#include <iostream>
using namespace std;
 
// PRE: 2 enters
// POS: mĂ xim dels dos enters introduits
int max2 (int a, int b) {
    if (a < b) return b;
    else return a;
}
 
// PRE: 4 enters
// POS: retorna el màxim dels 4 enters
int max4(int a, int b, int c, int d) {
    return max2(max2(a,b),max2(c,d));
}
 
int main() {
     int a, b, c, d;
     cin >> a >> b >> c >> d;
     cout << max4(a, b, c, d) << endl;
}