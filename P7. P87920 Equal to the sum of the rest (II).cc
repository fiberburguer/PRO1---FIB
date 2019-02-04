#include <iostream>
#include <vector>
 
using namespace std;
 
bool is_sum_of_the_rest (const vector <int>& v, int suma, int n);
 
int main(){
    int n;
    while (cin >> n) {
        vector <int> v (n);
        int suma = 0;
        for (int i = 0; i < n; ++i) {
            int input;
            cin >> input;
            v[i] = input;
            suma = suma + input;
        }
        if (is_sum_of_the_rest(v, suma, n)) cout << "YES" << endl;
        else cout << "NO" << endl;
 
    }
 
}
 
 
bool is_sum_of_the_rest (const vector <int>& v, int suma, int n) {
    for (int i = 0; i < n; ++i) {
        if (suma - v[i] == v[i]) return true;
    }
    return false;
}