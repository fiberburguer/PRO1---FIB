#include <iostream>
#include <vector>
 
// Cosas del enunciado:
// Una X significa que hay un muro en ese espacio del campo
// Un punto significa casilla vacía
// Un dígito significa que hay basura en esa casilla.
// Órdenes de movimiento: N,S,E,O (Norte, Sur, Este, Oeste)
 
using namespace std;
 
struct Robot {
    int pos_x;
    int pos_y;
    int basura_recogida;
};
 
// PRE: Tiene como entrada el robot del enunciado con sus coordenadas y el vector del mapeado
// POS: En la posición del robot mira que haya basura y si la hay la "recoge" poniendo a '.'
// esa casilla del mapeado y va sumando al total de la basura que va recogiendo.
void tarea(Robot& robot, vector< vector<char> >& Matrix) {
    if (Matrix[robot.pos_y][robot.pos_x] >= '0' and Matrix[robot.pos_y][robot.pos_x] <= '9') {
        robot.basura_recogida += Matrix[robot.pos_y][robot.pos_x] - '0';
        Matrix[robot.pos_y][robot.pos_x] = '.';
    }
}
 
// OJO, que "ordenes" es el string que me pasa con el CONJUNTO de ordenes y orden es
// cuando he ido sacando una a una las ordenes de ese conjunto.
 
// PRE: Le pasas la matriz (mapeado), el robot con sus coordenadas y la orden de ese momento
// POS: Devuelve un valor booleano diciendo si se va a chocar o no contra una pared
bool detectar_muro(Robot robot, const vector< vector<char> >& Matrix, char orden) {
    if (orden == 'N' and Matrix[robot.pos_y - 1][robot.pos_x] == 'X') return true;
    else if (orden == 'S' and Matrix[robot.pos_y + 1][robot.pos_x] == 'X') return true;
    else if (orden == 'E' and Matrix[robot.pos_y][robot.pos_x + 1] == 'X') return true;
    else if (orden == 'O' and Matrix[robot.pos_y][robot.pos_x - 1] == 'X') return true;
    return false;
}
 
// PRE: Le pasas el robot con sus coordenadas, la matriz del mapeado y las ordenes
// POS: Ejecuta esa orden hasta que choca con una pared y guarda los nuevos valores
// de las coordenadas y la matriz modificada.
void accion(Robot& robot, vector< vector<char> >& Matrix, string ordenes) {
    for (int i = 0; i < ordenes.size(); ++i) {
        while (not detectar_muro(robot, Matrix, ordenes[i])) {
            if (ordenes[i] == 'N' and Matrix[robot.pos_y - 1][robot.pos_x] != 'X') --robot.pos_y;
            else if (ordenes[i] == 'S' and Matrix[robot.pos_y + 1][robot.pos_x] != 'X') ++robot.pos_y;
            else if (ordenes[i] == 'E' and Matrix[robot.pos_y][robot.pos_x + 1] != 'X') ++robot.pos_x;
            else if (ordenes[i] == 'O' and Matrix[robot.pos_y][robot.pos_x - 1] != 'X') --robot.pos_x;
            tarea(robot, Matrix);
        }
    }
}
 
// Si quitáis las barras "//" de comentarios donde tengo puesto couts veréis la matriz
// que nos dan y después el camino que sigue el robot. Mola.
int main(){
    int f, c;
    int cas = 1;
    while (cin >> f >> c) {
        vector< vector<char> > Matrix(f, vector<char>(c));
        // Primero montaremos el "campo de juego"
        for (int i = 0; i < f; ++i) {
            for (int j = 0; j < c; ++j) {
                cin >> Matrix[i][j];
//                cout << Matrix[i][j] << ' ';
            }
//            cout << endl;
        }
        Robot robot;
        robot.basura_recogida = 0;
        cin >> robot.pos_y;
        cin >> robot.pos_x;
        string ordenes;
        cin >> ordenes;
        accion(robot, Matrix, ordenes);
//        cout << endl;
//        for (int i = 0; i < f; ++i) {
//            for (int j = 0; j < c; ++j) {
//                cout << Matrix[i][j] << ' ';
//            }
//            cout << endl;
//        }
        cout << "Cas " << cas << ": " << robot.basura_recogida << endl;
        ++cas;
    }
}
