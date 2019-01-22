#include <iostream>
#include <vector>
using namespace std;
 
int suma_cifras(string a) {
    int suma = 0;
    for (int i = 0; i < a.size(); ++i) {
        suma += int(a[i] - '0');
    }
    return suma;
}
 
int main() {
    string n;
    cin >> n;
    int xifres = n.size();
    if (n.size()%2 == 0) {
        int e = 0;
        int m = xifres/2 - 1;
        int d = xifres - 1;
        string primera_part = "";
        string segona_part = "";
        for (int i = e; i <= m; ++i) primera_part += n[i];
        for (int i = m + 1; i <= d; ++i) segona_part += n[i];
 
        int sum1 = suma_cifras(primera_part);
        int sum2 = suma_cifras(segona_part);
        if (sum1 < sum2) cout << sum1 << " < " << sum2 << endl;
        else if (sum1 > sum2) cout << sum1 << " > " << sum2 << endl;
        else cout << sum1 << " = " << sum2 << endl;
    }
    else cout << "nothing" << endl;
}