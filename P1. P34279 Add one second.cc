#include <iostream>
using namespace std;
 
int main () {
  int x,y,z;
  cin >> x >> y >> z;
 
  z = z+1;
  if (z>=60) {y = y+1; z=0;}
  if (y>=60) {y = 0; x=x+1;}
  if (x>=24) {x = 0;}
   
  if (x<10) {cout << "0";}
  cout << x << ":";
  if (y<10) {cout << "0";}
  cout << y << ":";
  if (z<10) {cout << "0";}
  cout << z << endl;
}