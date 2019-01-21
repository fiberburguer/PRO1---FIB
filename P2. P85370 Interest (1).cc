#include <iostream>
#include <string>
using namespace std;
 
int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    double c, i, t;
    string o;
    cin >> c >> i >> t >> o;
    if(o == "simple") cout << (c*(1+i*t/100)) << endl;
    else {
        double s = 1;
        for(int n = 0; n < t; n ++) s= s *(1+i/100);
        cout << c*s << endl;
    }
}