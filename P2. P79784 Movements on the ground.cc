#include <iostream>
using namespace std;
 
int main(){
    int x=0,y=0;
    char c;
    while (cin >> c) {
        if (c=='n') y--;
        if (c=='s') y++;
        if (c=='e') x++;
        if (c=='w') x--;}
    cout << "(" << x << ", " << y << ")" << endl;
}