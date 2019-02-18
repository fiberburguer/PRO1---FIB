#include <iostream>
#include <vector>
using namespace std;
 
struct Alumne {
    int dni; string nom;
};
 
struct Nota {
    int dni;
    string ass; // assignatura
    string fac; // facultat
    double nota;
};
 
void llegeix_alumnes(vector<Alumne>& alumnes) {
     int m; cin >> m;
    alumnes = vector<Alumne>(m);
    for (int i = 0; i < m; ++i) cin >> alumnes[i].dni >> alumnes[i].nom;
}
 
void llegeix_notes(vector<Nota>& notes) {
    int n;
    cin >> n;
    notes = vector<Nota>(n);
    for (int i = 0; i < n; ++i) {
        cin >> notes[i].dni >> notes[i].ass >> notes[i].fac >> notes[i].nota;
    }
}
 
int main() {
     cout.setf(ios::fixed); // estableix el format dels reals
     cout.precision(2); // per escriure les notes
     vector<Alumne> alumnes;
     vector<Nota> notes;
     llegeix_alumnes(alumnes);
     llegeix_notes(notes);
 
     int n = alumnes.size();
     int m = notes.size();
     int k = 0;
     if (n > 0 and m > 0) {
         for (int i = 0; i < n; ++i) {
             double suma, facultades;
             suma = facultades = 0;
             // Uso esta variable para parar el incremento de k mientras busco
             // el dni de las notas que coincida con el del alumno
             bool noseque = false;
             while (k < m and alumnes[i].dni != notes[k].dni and not noseque) {
                 if (notes[k].dni < alumnes[i].dni) ++k;
                 else noseque = true;
             }
             //  AquĂ­ miro los siguientes elementos de notas que tienen
             //  el mismo dni... a su vez voy printando la informaciĂłn y
             //  guardo las facultades en las que ha estado el alumno de alumnes[i]
             //  y la suma de sus notas para, finalmente, printar su media.
             if (alumnes[i].dni == notes[k].dni) {
                 cout << alumnes[i].dni << ' ' << alumnes[i].nom << endl;
                 while (k < m and alumnes[i].dni == notes[k].dni) {
                     cout << "     " << notes[k].ass << ' ' << notes[k].fac
                     << ' ' << notes[k].nota << endl;
                     suma += notes[k].nota;
                     ++facultades;
                     ++k;
                 }
                 cout << "     average: " << suma/facultades << endl << endl;
             }
         }
     }
}
