#include <iostream>
using namespace std;
 
 
int main() {
    int a, b, n;
    cin >> a >> b;
    if (a<=b) {
        n=a;
        while (n<b) {
            cout << n << ",";
            n++;
        }
        cout << n << endl;
    }
    else {
        cout << endl;
    }
}