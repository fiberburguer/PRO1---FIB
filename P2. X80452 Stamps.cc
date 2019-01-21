#include <iostream>
using namespace std;
 
 
int main() {
   
    int n;
    while (cin >> n) {
        int p = n/7, q = 0, pmin = 0, qmin = 0, min = n;
        while (p >= 0) {
            if ((7*p+4*(n-7*p)/4) == n) {
                q = (n-7*p)/4;
                   
             if (min > (p+q) and n == 7*p+4*q) {
                 min = p + q;
                 pmin = p;
                 qmin = q;
             }
            }
         --p;
                 
             
        }
         cout << pmin << " " << qmin << endl;
     }
}