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
 
void add (Rational& number) {
  Rational number2;
  cin >> number2.num >> number2.den;
  Rational result;
  result.num = (number.num * number2.den)+ ( number2.num * number.den);
  result.den = number.den * number2.den;
   
  number = result;
}
 
void substract (Rational& number) {
  Rational number2;
  cin >> number2.num >> number2.den;
  Rational result;
  result.num = (number.num * number2.den) - ( number2.num * number.den);
  result.den = number.den * number2.den;
   
  number = result;
}
 
void multiply (Rational& number) {
  Rational number2;
  cin >> number2.num >> number2.den;
  Rational result;
  result.num = number.num * number2.num;
  result.den = number.den * number2.den;
 
  number = result;
}
 
void divide (Rational& number) {
  Rational number2;
  cin >> number2.num >> number2.den;
  Rational result;
  result.num = number.num * number2.den;
  result.den = number.den * number2.num;
 
  number = result;
}
 
 
 
void simplify(Rational& number) {
    Rational res;
  res.num=number.num/gcd(number.num,number.den);
  res.den=number.den/gcd(number.num,number.den);
  if (res.den<0) {
    res.den=res.den*(-1);
    res.num=res.num*(-1);
  }
  number=res;
}
 
void print(Rational& number) {
  if (number.num%number.den==0) cout<<number.num/number.den<<endl;
  else cout<<number.num<<"/"<<number.den<<endl;
}
 
   
int main() {
    Rational number;
    cin>>number.num>>number.den;
    simplify(number);
    print(number);
    string s;
    while (cin>>s) {
      if        (s=="add") add(number);
      else if   (s=="substract") substract(number);
      else if   (s=="multiply") multiply(number);
      else if   (s=="divide") divide(number);
      simplify(number);
      print(number);
    }
   
}
