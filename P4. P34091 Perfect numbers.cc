#include <iostream>
using namespace std;
 
bool is_perfect(int n) {
    int suma = 1;
    for(int i = 2; i*i <= n; ++i){
        if(n % i == 0) suma += i + n/i;
    }
    if(n != 0 and n != 1) return (suma == n);
    else return false;
}
   
int main(){
    int n;
    cin >> n;
    cout<<is_perfect(n)<<endl;
}