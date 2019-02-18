#include <iostream>
#include <vector>
 
using namespace std;
 
// Algoritmo Criba de Eratóstenes. No le busquéis lógica, tragad.
// PRE: Tiene un vector de entrada;
// POS: Marca toda las posiciones del vector donde hay números primos
void calcular_primeros_mil_primeros(vector<bool> &v) {
    v[0] = v[1] = false;
    for(int i = 2; i*i <= 7919; ++i) {
        if (v[i]) {
            for(int j = 2*i; j <= 7919; j += i) {
                if(v[j]) v[j] = false;
            }
        }
    }
}
 
int main() {
    vector<bool> v(7920, true);
    calcular_primeros_mil_primeros(v);
    int n;
        while(cin >> n) {
            int i = 1;
            bool primer = true;
            // Busco en los siguientes bucles todas las posiciones 'marcadas' y las muestro
            for (int j = 0; j < n; ++j) {
                ++i;
                while (i < v.size() and not v[i]) ++i;
                if (primer) {
                    cout << i;
                    primer = false;
                }
                else cout << ',' << i;
            }
            cout << endl;
        }
}
