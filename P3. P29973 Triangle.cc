#include <iostream>
using namespace std;
 
int main() {
    int n, i=1;
    cin >> n;
    if (n>0) {
        while (i<=n) {
            for (int j=i; j>0; j--) {
                cout << "*";}
            cout << endl;
            i++;
        }
    }
}