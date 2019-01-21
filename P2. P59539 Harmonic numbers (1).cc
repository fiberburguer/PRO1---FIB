#include <iostream>
using namespace std;
 
 
int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
   
    double n,m;
    m=0;
    cin >> n;
   
    while (n>0) {
        m=m+(1/n);
        n=(n-1);
    }
    cout << m << endl;
}