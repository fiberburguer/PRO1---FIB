#include <iostream>
using namespace std;
 
int number_of_digits(int n) {
    int i=0;
    if (n==0) i=1;
    else {
    while(n>0) {
        n=n/10;
        ++i;
    }}
    return i;
}
   
   
int main(){
    int n;
    cin >> n;
    cout<<number_of_digits(n)<<endl;
}