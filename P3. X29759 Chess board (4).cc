#include <iostream>
using namespace std;
 
int main () {
    int r,w=0,b=0,xc,yc;
    char coins;
    cin >> r;
    for (xc=0; xc<r; xc++) {
        for (yc=0; yc<r; yc++) {
            cin >> coins;
            if ((xc+yc)%2 == 0) w = w + (coins - '0');
            else b = b + (coins - '0');
        }
       
    }
    cout << w << "-" << b << " = " << (w-b) << endl;
}