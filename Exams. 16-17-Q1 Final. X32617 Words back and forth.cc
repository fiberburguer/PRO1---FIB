#include <iostream>
#include <string>
using namespace std;

int main(){
  string mode;
  while(cin >> mode){
    string s1,s2;
    cin >> s1 >> s2;
    int num;
    cin >> num;
    int count = 0;
    string anterior;
    string actual;
    for(int i=0;i<num;++i){
      cin >> actual;
      if(mode == "forth"){
	if(actual == s2 and anterior == s1) ++count;
      }	
      if(mode == "back"){
	if(actual == s1 and anterior == s2) ++count;
      }
      anterior = actual;
      }
      cout << count << endl;
  }
}