#include <iostream>
using namespace std;
 
 
int main() {
    int a,b,d,r;
    cin >> a >> b;
    d=a/b;
    r=a%b;
    if (r<0) {
        d=(d-1);
        r=(a-(d*b));
    }
    cout << d << " " << r << endl;
}