#include <iostream>
using namespace std;
 
int main(){
    int x;
    while (cin >> x) {
        bool entry = true;
        while (entry) {
            int producto;
            if (x != 0) producto = 1;
            else producto = 0;
            cout << "The product of the digits of " << x << " is ";
            while (x > 0) {
            int digit = x%10;
            x = x/10;
            producto = producto*digit;
            }
            cout << producto << '.' << endl;
            x = producto;
            if (x < 10) entry = false;
        }
        cout << "----------" << endl;
    }
}