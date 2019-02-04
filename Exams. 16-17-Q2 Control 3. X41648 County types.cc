#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Poblacio {
    string pob;
    int    alt;
    string com;
};

string tipusComarca(const vector<Poblacio> & lpob, const string & comarca) {
   int mesalt = 0;
   int mesbaix = 500;
   
   for(int j=0;j<lpob.size();++j){
     if(lpob[j].com == comarca){
       if(lpob[j].alt > mesalt) mesalt = lpob[j].alt;
       if(lpob[j].alt < mesbaix) mesbaix = lpob[j].alt;
   }
   }
     if(mesbaix >=500) return "mountain";
     if(mesalt < 500) return "seaside";
     return "mixed";
}

vector<Poblacio> llegir_poblacions(int n) {
  vector<Poblacio> lpobl(n);
  for (int i = 0; i < n; ++i) {
    cin >> lpobl[i].pob >> lpobl[i].alt >> lpobl[i].com;
  }
  return lpobl;
}

int main() {
     int n;
     cin >> n;
     vector <Poblacio> llista;
     llista = llegir_poblacions(n);
     string k;
     while(cin >> k){
       string tipus = tipusComarca(llista, k);
       cout << k << ": " << tipus << endl;
}
}