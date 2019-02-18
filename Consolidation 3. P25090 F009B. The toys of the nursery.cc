#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
struct Parell {
    string nom, joguina;
};
 
bool comparacion(const Parell& a, const Parell& b) {
    if (a.nom <= b.nom and a.joguina < b.joguina) return true;
    if (a.nom < b.nom) return true;
    else return false;
}
 
int main(){
    int n;
    cin >> n;
    vector<Parell> parells(n);
 
    for (int i = 0; i < n; ++i) {
        cin >> parells[i].nom;
        cin >> parells[i].joguina;
    }
 
    sort(parells.begin(), parells.end(), comparacion);
 
    int k = 0;
    while (k < n) {
        int contador = 1;
        while (k < n - 1 and parells[k].nom == parells[k + 1].nom and parells[k].joguina == parells[k + 1].joguina) {
            ++k;
            ++contador;
        }
        cout << parells[k].nom << ' ' << parells[k].joguina << ' ' << contador << endl;
        ++k;
    }
}
