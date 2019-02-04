#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
char lletra_mes_frequent(const string& s) {
    vector<char> abecedario(26);
    char letra = 'a';
    for (int i = 0; i < 26; ++i) {
        abecedario[i] = letra;
        ++letra;
    }
    vector<int> cuenta(26, 0);
    for (int i = 0; i < s.size(); ++i) {
        for (int j = 0; j < abecedario.size(); ++j) {
            if (abecedario[j] == s[i]) ++cuenta[j];
        }
    }
    int max_apariciones;
    vector<int> aux(26);
    aux = cuenta;
    sort(aux.begin(), aux.end());
    max_apariciones = aux[25];
    vector<char> w(s.size());
    int m = 0;
    for (int i = 0; i < cuenta.size(); ++i) {
        if (cuenta[i] == max_apariciones) {
            w[m] = abecedario[i];
            ++m;
        }
    }
    vector<char> finalizando(m);
    for (int i = 0; i < m; ++i) {
        finalizando[i] = w[i];
    }
    sort(finalizando.begin(), finalizando.end());
    return finalizando[0];
}
 
int main(){
    cout.setf(ios::fixed);
    cout.precision(2);
 
    int n;
    cin >> n;
    vector<string> entrada(n);
    double media = 0;
    for (int i = 0; i < n; ++i) {
        cin >> entrada[i];
        media += entrada[i].size();
    }
    media /= n;
    cout << media << endl;
    for (int i = 0; i < n; ++i) {
        if (entrada[i].size() >= media) {
            cout << entrada[i] << ": " << lletra_mes_frequent(entrada[i]) << endl;
        }
    }
}