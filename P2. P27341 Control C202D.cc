#include <iostream>
using namespace std;
 
int main () {
  int x, y;
 
  while (cin >> x >> y) {
    int count = 0;
    cout << "suma dels cubs entre " << x << " i " << y << ": ";
   
  while (x<y+1){
    count = count + (x*x*x);
    ++x;
    }
    cout << count << endl;
  }
}