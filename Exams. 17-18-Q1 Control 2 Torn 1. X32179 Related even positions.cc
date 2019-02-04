#include <iostream>
using namespace std;

int main(){
  int a,b,count=1;
  cin >> a >> b;
  int pos = 1;
  while (cin >>a){
    if((( pos%2 ) == 0)and(a == b)) 
	++count;
	++pos;
      }
        cout << count << endl;
}