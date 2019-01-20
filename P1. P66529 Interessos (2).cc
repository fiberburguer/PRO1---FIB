#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    double i;
    string t;
    cin >> i >> t;
    int vegades;
    double i2;
    if(t=="semestral"){
        vegades = 2;
    }
    else if(t=="trimestral") {
        vegades = 4;
    }
    else if(t=="mensual") {
        vegades = 12;
    }
    else if(t=="setmanal") {
        vegades = 52;
    }
    i2 = 1;
    int vegades2 = vegades;
    while(vegades2--){
        i2 = i2*(1+i/100.0/(vegades));
    }
    cout << (i2-1)*100 << endl;
}