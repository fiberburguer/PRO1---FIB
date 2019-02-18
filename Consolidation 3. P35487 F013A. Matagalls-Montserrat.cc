#include <iostream>
#include <vector>
 
using namespace std;
 
struct Info {
    string nom, hora;
};
 
// PRE: Tiene como entrada un nombre y un vector lleno de participantes
// POS: Devuelve un string diciendo si abandonĂł el participante, si no es
//      posible saber
//  Cerca dicotĂ˛mica. O la usas o Time Limit Exceeded
string busca(string nom, const vector<Info>& v) {
    int esq = 0;
    int dre = v.size() - 1;
    int pos;
    bool trobat = false;
    while (not trobat and esq <= dre) {
        pos = (esq + dre)/2;
        if (nom < v[pos].nom) dre = pos - 1;
        else if (nom > v[pos].nom) esq = pos + 1;
        else {
            if (pos - 1 >= 0 and nom == v[pos - 1].nom) return "???";
            if (pos + 1 < v.size() and nom == v[pos + 1].nom) return "???";
            else return v[pos].hora;
        }
    }
    return "ABANDONA";
}
 
int main(){
    int n;
    cin >> n;
    vector<Info> L1(n);
    if (n!= 0) {
            // Con i voy recorriendo los n participantes que participaron en la carrera y la terminaron
        for (int i = 0; i < n; ++i) {
            Info persona;
            cin >> persona.nom >> persona.hora;
            L1[i] = persona;
        }
    }
    string dni, nom;
    while (cin >> dni >> nom) {
        string respuesta = busca(nom, L1);
        if (respuesta != "???" and respuesta != "ABANDONA") {
            cout << dni << ' ' << respuesta << endl;
        }
        else cout << dni << ' ' << respuesta << endl;
    }
}
