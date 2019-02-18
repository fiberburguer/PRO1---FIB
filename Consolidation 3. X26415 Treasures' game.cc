#include <iostream>
#include <vector>
 
using namespace std;
 
typedef vector< vector<int> > Matriz;
 
struct Jugador {
    int fila;
    int columna;
    int tesoros_encontrados;
    int numero_casillas;
};
 
// PRE: Entrada de una matriz que pertenece al mapeado del juego, dos jugadores y un entero como turno de partida.
// POS: Modifica el estado de los jugadores hasta el final de la partida
void donali_al_play_antonio(Matriz& mapeado, Jugador& jugador1, Jugador& jugador2, int& turno) {
    int n = mapeado.size();
    int m = mapeado[0].size();
    // Propiedades para el jugador1
    jugador1.fila = 0;
    jugador1.columna = 0;
    jugador1.tesoros_encontrados = 0;
    jugador1.numero_casillas = 0;
    // Propiedades para el jugador2
    jugador2.fila = n - 1;
    jugador2.columna = m - 1;
    jugador2.tesoros_encontrados = 0;
    jugador2.numero_casillas = 0;
 
    bool fin = false;
    while (not fin) {
        if (jugador1.fila == jugador2.fila and jugador1.columna == jugador2.columna) fin = true;
        ++turno;
        if (turno%2 != 0) {
            if (mapeado[jugador1.fila][jugador1.columna] >= 0) {
                ++jugador1.numero_casillas;
                jugador1.tesoros_encontrados += mapeado[jugador1.fila][jugador1.columna];
                if (jugador1.fila%2 == 0) {
                    if (jugador1.columna != m - 1) ++jugador1.columna;
                    else ++jugador1.fila;
                }
                else {
                    if (jugador1.columna != 0) --jugador1.columna;
                    else ++jugador1.fila;
                }
            }
            else ++mapeado[jugador1.fila][jugador1.columna];
        }
        else {
            if (mapeado[jugador2.fila][jugador2.columna] >= 0) {
                ++jugador2.numero_casillas;
                jugador2.tesoros_encontrados += mapeado[jugador2.fila][jugador2.columna];
                if (jugador2.fila%2 == 0) {
                    if (jugador2.columna != 0) --jugador2.columna;
                    else --jugador2.fila;
                }
                else {
                    if (jugador2.columna != m - 1) ++jugador2.columna;
                    else --jugador2.fila;
                }
            }
            else ++mapeado[jugador2.fila][jugador2.columna];
        }
    }
}
 
int main(){
    int k;
    cin >> k;
    for (int i = 0; i < k; ++i) {
        int n, m;
        cin >> n >> m;
        // Creo la matriz que forma mi mapeado de n x m y ingreso los valores.
        Matriz mapeado(n, vector<int>(m));
        for (int j = 0; j < n; ++j) {
            for (int g = 0; g < m; ++g) cin >> mapeado[j][g];
        }
        Jugador jugador1, jugador2;
 
        int turno = 0;
        donali_al_play_antonio(mapeado, jugador1, jugador2, turno);
 
        if (jugador1.tesoros_encontrados >= jugador2.tesoros_encontrados) cout << "1: " << jugador1.tesoros_encontrados << ' ' << jugador1.numero_casillas << endl;
        else if (jugador1.tesoros_encontrados == jugador2.tesoros_encontrados and turno%2 != 0) cout << "1: " << jugador1.tesoros_encontrados << ' ' << jugador1.numero_casillas << endl;
        else cout << "2: " << jugador2.tesoros_encontrados << ' ' << jugador2.numero_casillas << endl;
 
    }
}
