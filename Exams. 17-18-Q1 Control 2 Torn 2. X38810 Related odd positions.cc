#include <iostream>
using namespace std;

int main(){
  int first;
  cin >> first;
  int n;
  int pos = 2;
  int count = 1;
  while ( cin >> n) {
    if ( (pos%2!=0) and (n == first)) {++count;}
    ++pos;
  }
  cout << count << endl;
}