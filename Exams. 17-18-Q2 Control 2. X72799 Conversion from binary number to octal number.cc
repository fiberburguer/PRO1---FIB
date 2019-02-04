#include <iostream>
#include <cmath>
using namespace std;

int binary2octal(int n) {
   if(n<=1){
     return n;
   }
   else {
     int sum=0;
     int x = n%1000;
     for (int i=0; i<=2; ++i){
       sum = sum + ((x%10)*pow(2,i));
       x = x/10;
     }
     return sum + 10*binary2octal(n/1000);
}
}

int main(){
    int n;
    while (cin >> n){
        cout  << n << " is equivalent to " << binary2octal(n);
        cout  << " in base 8" << endl;
    }    
}
    