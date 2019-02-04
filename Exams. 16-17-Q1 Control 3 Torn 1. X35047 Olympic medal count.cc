#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


struct pais {
   string nombre;
   int oro, plata, bronce;
};


bool comp(const pais& a, const pais& b){
  if(a.oro != b.oro) return a.oro > b.oro;
  if(a.plata != b.plata) return a.plata > b.plata;
  if(a.bronce != b.bronce) return a.bronce > b.bronce;
  return a.nombre < b.nombre;
}

    
int main(){
  int n;
  cin >> n;
  vector<pais>p(n);
  for(int i=0; i<n;++i){
    cin >> p[i].oro >> p[i].plata >> p[i].bronce >> p[i].nombre;;
  }
  sort(p.begin(),p.end(),comp);
  for (int m=0; m<p.size();++m){
    cout << p[m].nombre << " " << p[m].oro << " " << p[m].plata << " " << p[m].bronce << " ";
    cout << (p[m].oro + p[m].plata + p[m].bronce) << endl;
}
}
  