#include <iostream>
using namespace std;
 
void dar_la_vuelta() {
    string entrada;
    if (cin >> entrada) {
        dar_la_vuelta();
        cout << entrada << endl;
    }
}
 
int main(){
    dar_la_vuelta();
}