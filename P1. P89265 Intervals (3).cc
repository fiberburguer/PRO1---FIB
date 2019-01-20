#include <iostream>
using namespace std;
 
int main () {
    int x1, y1, x2, y2, x, y;
 
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1<=x2) {
        if (y1<=y2) {
            x=x2;
            y=y1;
        }
        else {
            x=x2;
            y=y2;
        }
    }
    else {
        if (y1<=y2) {
            x=x1;
            y=y1;
        }
        else {
            x=x1;
            y=y2;
        }
    }
   
    if (x1==x2 && y1==y2) {
        cout << "= , ";
    }
    else if (x1>=x2 && y1<=y2) {
        cout << "1 , ";
    }
    else if (x1<=x2 && y1>=y2)  {
        cout << "2 , ";
    }
    else {
        cout << "? , ";
    }
   
    if (x<=y) {
        cout << "[" << x << "," << y << "]" << endl;
    }
    else {
        cout << "[]" << endl;
    }
}