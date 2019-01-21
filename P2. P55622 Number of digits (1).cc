#include <iostream>
using namespace std;
 
int main () {
    int n;
    cin >> n;
    int i=10;
    int d=1;
   
    while (n/i!=0) {
        i*=10;
        d++;
    }
    cout << "The number of digits of " << n << " is " << d << "." << endl;
}