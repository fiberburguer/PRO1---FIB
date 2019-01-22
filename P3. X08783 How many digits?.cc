#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int number, base, n=1;
    while (cin >> base >> number) {
        while (number >= (pow(base,n))) n++;
        cout << n << endl;
        n=1;
    }
}