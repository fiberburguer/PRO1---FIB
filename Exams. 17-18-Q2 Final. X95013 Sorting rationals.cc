#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct nombre{
  int primer;
  int segon;
};

bool comp(nombre a,nombre b){
  if(a.primer == b.primer and a.primer > 0 and a.segon > b.segon) return true;
  if(a.primer == b.primer and a.primer < 0 and a.segon < b.segon) return true;
  if(a.primer < b.primer) return true;
  return false;
}

int main(){
  int x;
  int y = 0;
  while(cin >> x){
    vector<nombre>v(x);
    for(int i=0;i<x;++i){
      cin >> v[i].primer >> v[i].segon;
    }
    
    sort(v.begin(),v.end(),comp);
    
    if(y == 2) cout << endl;
    if(y==0){
      y = 2;
    }
    
    for(int i=0; i<x;++i){
      cout << v[i].primer << "/" << v[i].segon << endl;
    }
  }
}