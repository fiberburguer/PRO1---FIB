#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    while (n > 2) {
        int aux = n;
        n = n/2;
        cout << aux%2;
    }
    if (n == 1) cout << 1 << endl;
    else cout << 0 << 1 << endl;
}