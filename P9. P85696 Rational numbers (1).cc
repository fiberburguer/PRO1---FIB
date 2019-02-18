#include <iostream>
using namespace std;
 
struct Rational {
         int num, den;
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
 
 
Rational rational(int n, int d) {
    Rational res;
  res.num=n/gcd(n,d);
  res.den=d/gcd(n,d);
  if (res.den<0) {
    res.den=res.den*-1;
    res.num=res.num*-1;
  }
  return res;
}
