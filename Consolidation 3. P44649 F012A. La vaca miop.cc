#include <iostream>
#include <vector>
 
using namespace std;
 
typedef vector<char> Fila;
typedef vector<Fila> Matriu;
 
int main(){
 
    int mida_mur, pos_sortida, pos_vaca;
    cin >> mida_mur >> pos_sortida >> pos_vaca;
    Matriu mapeado(mida_mur, Fila(100, '.'));
    // Inicio el principio, el muro y la vaca
    for (int i = 0; i < mida_mur; ++i) mapeado[i][0] = '|';
    mapeado[pos_sortida][0] = '=';
    mapeado[pos_vaca][1] = 'V';
 
    // Variables para el bucle
    int pasos_de_la_vaca = 1;
    int direccion_de_la_vaca = 1;
    int columna_de_la_vaca = 2;
    while (pos_sortida != pos_vaca) {
        int i = 0;
        while (pos_sortida != pos_vaca and i < pasos_de_la_vaca) {
            pos_vaca += direccion_de_la_vaca;
            mapeado[pos_vaca][columna_de_la_vaca] = 'V';
            ++columna_de_la_vaca;
            ++i;
        }
        direccion_de_la_vaca *= -1;
        pasos_de_la_vaca *= 2;
    }
 
    for (int i = 0; i < mida_mur; ++i) {
        for (int j = 0; j < columna_de_la_vaca; ++j) {
            cout << mapeado[i][j];
        }
        cout << endl;
    }
}
