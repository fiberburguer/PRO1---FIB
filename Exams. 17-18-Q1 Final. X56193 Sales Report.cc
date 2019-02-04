#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Info{
    string code;
    int gross_income;
    int num;
    int units;
};

bool comp(Info a, Info b){
  if(a.gross_income == b.gross_income and a.code < b.code) return true;
  if(a.gross_income > b.gross_income) return true;
  else return false;
}
int main(){
  int x;
  while(cin >> x){
    vector <Info> v(x);
    for(int i=0; i<x;++i){
      cin >> v[i].code >> v[i].num >> v[i].units;
      v[i].gross_income = v[i].num * v[i].units;
    }
    
    sort(v.begin(),v.end(),comp);
    
    for(int i=0;i<x;++i){
      cout << v[i].code << " " << v[i].gross_income << endl;
    }
    cout << endl;
  }
}  
    