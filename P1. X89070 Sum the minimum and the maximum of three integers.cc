#include <iostream>
using namespace std;
 
int main () {
    int a,b,c,x,y;
    cin >> a >> b >> c;
   
   
    if (a<b) {
        if (a<c) {
            x=a;
        }
        else {
            x=c;
        }
    }
    else {
        if (b<c) {
            x=b;
        }
        else {
            x=c;
        }
    }
   
   
    if (a>b) {
        if (a>c) {
            y=a;
        }
        else {
            y=c;
        }
    }
    else {
        if (b>c) {
            y=b;
        }
        else {
            y=c;
        }
    }
    cout << (x+y) << endl;
}