#include <iostream>
using namespace std;
 
int factorial(int n) {
    int x=1;
    for (int i=1;i<=n;i++) x=x*i;
    return x;
}
   
   
   
int main(){
    int n;
    cin >> n;
    cout<<factorial(n)<<endl;
}