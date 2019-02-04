#include <iostream>
using namespace std;
 
int calculo() {
    char c;
    cin >> c;
    if (c == '+') return calculo() + calculo();
    if (c == '-') return calculo() - calculo();
    if (c == '*') return calculo()*calculo();
    return c - '0';
}
 
int main(){
    cout << calculo() << endl;
 
}