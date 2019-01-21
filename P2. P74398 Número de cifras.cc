#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
   
    int n,b,x;
    cin >> n;
    b=2;
    x=1;
   
    // b^x > n
    while (b<=16) {
       
        while (n>=(pow(b,x))) {
            x++;
        }
       
        cout << "Base " << b << ": " << x << " cifras." << endl;
        x=1;
        b++;
    }
}