// Input: sequence of characters that ends with ‘.’
// Output: number of times ‘a’ appears in the sequence
 
#include <iostream>
using namespace std;
 
int main() {
  char c;
  cin >> c;
  int count = 0;
 
  while ( c != '.' ) {
    if ( c == 'a') count = count + 1;
    cin >> c;
  }
 
  cout << count << endl;
}