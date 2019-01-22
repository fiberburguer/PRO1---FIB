#include <iostream>
using namespace std;
 
int main () {
  cout.setf (ios::fixed);
  cout.precision(4);
 
  double punt;
  cin >> punt;
  double num;
  double sum = 0;
  while (cin >> num){
    sum = (sum*punt) + num;
  }
  cout << sum << endl;
}