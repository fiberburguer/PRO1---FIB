#include <iostream>
using namespace std;
 
 
int main() {
    int x,y,a,b,n;
    cin >> x >> y;
   
    if (x>=y) {a=x;b=y;}
    else {a=y;b=x;}
    // a>b
   
    n=a;  
    while (n>=b) {
        cout << n << endl;
        n=(n-1);
    }
}