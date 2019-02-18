#include <iostream>
#include <vector>
using namespace std;
 
struct Rectangle {
    int est, oest, nord, sud;
};
 
//  Miro por intervalos si los puntos del primer rectรกngulo estรกn
//  contenidos dentro del rectรกngulo b.
bool esta_inclos(const Rectangle& a, const Rectangle& b) {
    bool intervalo1 = false;
    if (a.oest > b.oest and a.oest < b.est
        and a.est > b.oest and a.est < b.est) intervalo1 = true;
 
    bool intervalo2 = false;
    if (intervalo1) {
        if (a.nord < b.nord and a.nord > b.sud
            and a.sud < b.nord and a.sud > b.sud) intervalo2 = true;
    }
    return intervalo1 and intervalo2;
 
}
 
//  Como el problema dice que las soluciones con un nรบmero de iteraciones cuadrรกticas
//  no son aceptadas hay que implementar el algoritmo de ordenaciรณn mergesort, el mรกs
//  rรกpido que se ha aprendido durante este curso. Se necesitan las dos siguientes funciones.
void fusiona(vector<Rectangle>& v, int e, int m, int d) {
    int n = d - e + 1;
    vector<Rectangle> aux(n);
    int i = e;
    int j = m + 1;
    int k = 0;
 
    while (i <= m or j <= d) {
        if (i > m) {
            aux[k] = v[j];
            ++j;
            ++k;
        }
        else if (j > d) {
            aux[k] = v[i];
            ++i;
            ++k;
        }
        else if (esta_inclos(v[j], v[i])) {
            aux[k] = v[i];
            ++k;
            ++i;
        }
        else {
            aux[k] = v[j];
            ++k;
            ++j;
        }
    }
 
    for (int l = 0; l < n; ++l) {
        v[l + e] = aux[l];
    }
}
 
void mergesort(vector<Rectangle>& v, int e, int d) {
    if (e < d) {
        int m = (d + e)/2;
        mergesort(v, e, m);
        mergesort(v, m + 1, d);
        fusiona(v, e, m, d);
    }
}
 
//  PRE: el vector v ordenado en las posibles soluciones en las que
//       puede entrar como una matrioska los rectรกngulos.
//  POS: boleano que dice si se cumple la condiciรณn anterior, que sea
//       como la matrioska.
//  Inv: sirve : siempre llegarรก al final como true a condiciรณn de que
//       cada uno de los rectรกngulos pueda ser "encajado" en el siguiente.
bool son_nines(const vector<Rectangle>& v) {
    int i = v.size();
    --i;
    bool sirve = true;
    while (sirve and i > 0) {
        if (not esta_inclos(v[i], v[i - 1])) sirve = false;
        --i;
    }
 
    return sirve;
}
 
int main() {
    int n;
    bool primer = true;
    while (cin >> n) {
        if (not primer) cout << endl;
        vector<Rectangle> v(n);
        for (int i = 0; i < n; ++i) {
            Rectangle a;
            cin >> a.est >> a.oest >> a.nord >> a.sud;
            v[i] = a;
        }
        mergesort(v, 0, n - 1);
        if (son_nines(v)) {
            for (int i = 0; i < n; ++i) {
                cout << v[i].est << ' ' << v[i].oest << ' ' << v[i].nord << ' ' << v[i].sud << endl;
            }
        }
        else cout << "They are not Russian dolls" << endl;
        primer = false;
    }
}
