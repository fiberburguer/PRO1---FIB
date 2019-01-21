#include <iostream>
using namespace std;
 
 
int main () {
   
    cout.setf(ios::fixed);
    cout.precision(2);
   
   
    double n, x, x1, x2;
    cin >> n;
    x=0;
    x1=0;
    x2=0;
    while (cin >> x) {
        x1 += x;
        x2 += (x*x);
    }
    x1 = (x1*x1)/(n*(n-1));
    x2 /= (n-1);
    cout << (x2-x1) << endl;
}