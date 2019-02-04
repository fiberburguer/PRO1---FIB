#include <iostream>
using namespace std;
 
void pintar_lineas(int n) {
    if (n == 1) cout << '*' << endl;
    else {
        pintar_lineas(n - 1);
        pintar_lineas(n - 1);
        for (int i = 0; i < n; ++i) cout << '*';
        cout << endl;
 
    }
}
 
int main(){
    int n;
    cin >> n;
    pintar_lineas(n);
}