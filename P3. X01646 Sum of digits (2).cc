#include <iostream>
using namespace std;
 
int main() {
    int b, n,i=0;
    cin >> b;
    while (cin >> n) {
        cout << n << ": ";
        while (n!=0) {
            i=i+(n%b);
            n=n/b;
        }
        cout << i << endl;
        i=0;
    }
}