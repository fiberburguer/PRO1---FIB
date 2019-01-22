#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
    cout.setf(ios::fixed);
    cout.precision(6);
    int n;
    double s;
    while (cin >> n) {
        s=pow(n,0.5);
        n=n*n;
        cout << n << " " << s << endl;
    }
}