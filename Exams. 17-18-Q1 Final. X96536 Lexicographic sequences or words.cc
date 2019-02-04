#include <iostream>
#include <string>
using namespace std;

int main(){
  int x;
  char k = 'a';
  int count = 0;
  while(cin >> x){
    string a;
    bool trobat = false;
    for(int i=0;i<x;++i){
      cin >> a;
      if(a[0] == k and not trobat){
	++count;
	trobat = true;
      }
    }
    if(not trobat) cout << "Could not find a match for " << k << endl;
    if(k == 'z') k = 'a';
    else ++k;
  }
  cout << count << endl;
}
    