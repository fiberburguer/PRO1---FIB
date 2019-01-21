#include <iostream>
using namespace std;
 
int main() {
    int n,x;
    int total=0;
    cin >> n;
    cout << "nombres que acaben igual que " << n << ":" << endl;
   
    while (cin >> x) {
        if ( (n%1000)==(x%1000) ) {
            cout << x << endl;
            total++;
           
        }
    }
    cout << "total: " << total << endl;
}