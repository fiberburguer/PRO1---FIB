#include <iostream>
using namespace std;
 
int main () {
  int x, i;
  cin >> x;
 
  i= x%10 + ((x/10)%10) + ((x/100)%10);
 
  cout << i << endl;
}