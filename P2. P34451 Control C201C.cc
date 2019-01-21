#include <iostream>
using namespace std;
 
 
int main() {
    int n,x,i;
    cin >> n;
    while (cin >> x) {
        if ((x%n)==0) {i++;}
    }
    cout << i << endl;
}