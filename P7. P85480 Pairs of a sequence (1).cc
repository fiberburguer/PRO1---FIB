#include <iostream>
#include <vector>
using namespace std;
 
 
bool isPrime(int num){
     if(num==0 or num==1)
        return 0;
    for (int i=2;i*i<=num;++i){
        if (num%i==0)
            return false;
    }
    return true;}
   
int main() {
        int n;
        while (cin >> n) {
                vector<int> v(n);
                for (int i = 0; i < n; ++i) cin >> v[i];
                int i = 0;
                bool found = false;
                while (not found and i < n) {
                        int j = 0;
                        while (not found and j < n) {
                                if (i != j) {
                                        if (isPrime(v[i] + v[j])) found = true;
                                }
                                ++j;
                        }
                        ++i;
                }
                if (found) cout << "yes" << endl;
                else cout << "no" << endl;
        }
}