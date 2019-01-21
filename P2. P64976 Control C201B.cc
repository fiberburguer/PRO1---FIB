#include <iostream>
using namespace std;
 
int main () {
  int x;
  cin >> x;
  int i=1;
 
  while (i<=x){
    cout << x << " x " << i <<  " = " << (x*i) << endl;
    ++i;
  }
}