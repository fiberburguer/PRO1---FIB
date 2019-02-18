#include <iostream>
#include <vector>
using namespace std;
 
int nombre_digits(int n) {
    if (n < 10) return 1;
    return 1 + nombre_digits(n/10);
}
 
int main() {
    int n, f;
    cin >> n >> f;
    int digits = nombre_digits(n);
    //  Con una variable se podría hacer, pero el código
    //  lo comprendo mejor así. Primero calculo los carácteres
    //  de la ultima fila. Si te fijas en los ejemplos se ve que
    //  hay 2*f veces n, 2*f - 2 guiones y 1 punto.
    int caracteres_totales = 2*f*digits + 2*f - 1;
    //  Al total de carácteres que habrán máximo por línea le resto
    //  2*digitos, ya que en la primera línea todo será puntos menos
    //  2 numeros de x digitos (los cuento con nombre_digits), uno en
    //  cada extremo.
    int caracteres_primera_fila = caracteres_totales - 2*digits;
    //  Bucle para iterar sobre las filas
    for (int i = 0; i < f; ++i) {
        bool primer1 = true;
        //  Bucle para iterar sobre las columnas
        for (int j = 0; j < 2*(i + 1); ++j) {
            //  Cuando la columna es menor a la mitad
            //  del número de columnas hace falta que
            //  el '-' esté en un lado u otro, si no podría
            //  queda en el medio algo como "1003-.-1003", los
            //  queremos sin esos guiones. Uso además booleanos
            //  para evitar lo anterior (primer1).
            if (j < i + 1) {
                if (primer1) {
                    primer1 = false;
                    cout << n;
                }
                else cout << '-' << n;
            }
            else {
                if (j == i + 1) {
                    for (int k = 0; k < caracteres_primera_fila; ++k) {
                        cout << '.';
                    }
                    //  Si te fijas en los ejemplos te das cuenta que sigue el siguiente
                    //  patrón según avanza las filas:
                    caracteres_primera_fila = caracteres_primera_fila - 2*digits - 2;
                }
                if (j == 2*(i + 1) - 1) cout << n;
                else cout << n << '-';
            }
        }
        cout << endl;
    }
}
