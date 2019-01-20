#include <iostream>
using namespace std;
 
int main() {
    char x,y;
    cin >> x >> y;
   
    if (x=='A') {
        if (y=='A') {cout << "-" << endl;}
        if (y=='P') {cout << "1" << endl;}
        if (y=='V') {cout << "2" << endl;}
    }
   
    if (x=='P') {
        if (y=='A') {cout << "2" << endl;}
        if (y=='P') {cout << "-" << endl;}
        if (y=='V') {cout << "1" << endl;}
    }
   
    if (x=='V') {
        if (y=='A') {cout << "1" << endl;}
        if (y=='P') {cout << "2" << endl;}
        if (y=='V') {cout << "-" << endl;}
    }
}