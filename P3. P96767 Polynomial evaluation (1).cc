#include <iostream>
using namespace std;
 
int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
   
    double x;
    cin >> x;
    double n;
    double resultado = 0;
    double aux = 1;
    while (cin >> n) {
        n = n*aux;
        resultado = resultado + n;
        aux = aux*x;  
    }
    cout << resultado << endl;
}