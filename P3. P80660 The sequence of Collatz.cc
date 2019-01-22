#include <iostream>
using namespace std;
 
int main() {
    int n, s;
    while (cin >> n) {
        s=0;
        while (n!=1) {
            if (n%2==0) n/=2;
            else {n*=3;n++;}
            s++;
        }
        cout << s << endl;
    }
}