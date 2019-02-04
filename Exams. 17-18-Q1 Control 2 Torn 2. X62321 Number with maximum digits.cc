#include <iostream>
using namespace std;

//pre: a >= 0, b >= 0 with the same number of digits
//post: returns the num_max_digits of a and b

int num_max_digits(int a, int b){
  if (a==b){
    return a;
  }
  else{
    int sum;
    int c = a%10;
    int d = b%10;
    if(c<d){
      sum = d;
    }
    else{
      sum = c;
    }
  
  return sum + 10 * num_max_digits(a/10,b/10);
}
}

int main(){
  int a,b;
  while (cin >> a >> b){
  cout << num_max_digits(a,b) << endl;
}
}