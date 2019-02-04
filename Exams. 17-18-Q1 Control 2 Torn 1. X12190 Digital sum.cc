#include <iostream>
using namespace std;

int digital_sum(int x, int y){
  if (x==0 and   y==0){
  return 0;
  }
  else{
    int sum;
  sum = ((x%10+y%10)%10);
  return sum + 10*digital_sum(x/10, y/10);
  }
}
  
  int main() {
  int a,b;
  while (cin >> a >> b){
  cout << digital_sum(a,b) << endl;
  }
  }