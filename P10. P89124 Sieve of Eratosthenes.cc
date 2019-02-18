#include <iostream>
#include <vector>
using namespace std;
 
 
const int MAX = 1000000;
 
vector<bool> garbell(int n) {
        vector<bool> aux(n+1, true);
        for (int i = 2; i <= n; ++i) {
                for (int j = 2*i; j <= n; j += i) {
                        aux[j] = false;
                }              
        }
        return aux;
}
 
int main() {
        int n;
        vector<bool> auxiliar;
        auxiliar = garbell(MAX);
        while (cin >> n) {
                if (n == 0 || n == 1) cout << n << " is not prime" << endl;
                else {
                        if (auxiliar[n]) cout << n << " is prime" << endl;
                        else cout << n << " is not prime" << endl;
                }
        }
}
