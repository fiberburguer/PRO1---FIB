#include <iostream>
using namespace std;
 
 
int main() {
    int a,b,n;
    while (cin >> a >> b) {
        n=a;
        if (b==0) n=1;
        while (b>1) {
            n = n*a;
            b--;
        }
        cout << n << endl;
    }
}