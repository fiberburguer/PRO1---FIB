#include <iostream>
using namespace std;
 
 
struct Fraction {
    int num, den;   // always strictly positive
};
 
 
 
int gcd (int n, int d) {
    int r = 0;
    if(d == 0)
        return n;
    else {
        r = gcd(d, n%d);
    }
    return r;
}
 
 
 
 
Fraction addition(const Fraction& x, const Fraction& y) {
    Fraction result;
    result.num = (x.num * y.den)+ ( y.num * x.den);
    result.den = x.den * y.den;
    int i = gcd(result.num,result.den);
    result.num = result.num/i;
    result.den = result.den/i;
    return result;
}
 
 
int main() {
    Fraction a,b;
    char c;
    cin>>a.num>>c>>a.den;
    while (cin>>c && c!='=') {
        cin>>b.num>>c>>b.den;
        a = addition(a,b);
    }
    cout<<a.num<<"/"<<a.den<<endl;
}
