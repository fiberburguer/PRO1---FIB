   
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Result {
    string city;
    string district;
    int voters;
    int yes;
    int no;
    int blank;
    int null;
};

void read_data(vector<Result>& v) {
    Result r;
    while (cin >> r.city >> r.district >> r.voters >>
                  r.yes >> r.no >> r.blank >> r.null) {
        v.push_back(r);
    }
}

bool compara(const Result &a, const Result &b) {
   return a.district < b.district;  
}

int abstencions(Result v){
  int abstencion = v.voters - (v.yes + v.no + v.blank + v.null);
  
  return abstencion;
}

int vots(Result v){
  int vot = (v.yes + v.no + v.blank + v.null);
  
  return vot;
}

void compute_and_print(vector<Result>&v){
  int k = v.size();
  for (int i=0; i<k;++i){
  if(v[i].district == v[i+1].district){
    v[i].voters += v[i+1].voters;
    v[i].yes += v[i+1].yes; 
    v[i].no += v[i+1].no;
    v[i].blank += v[i+1].blank;
    v[i].null += v[i+1].null;
    
    swap(v[i],v[i+1]);
  }
  else{
    cout << v[i].district << " " << v[i].voters << " " << vots(v[i]) << " " << abstencions(v[i]);
    cout << " " << v[i].yes << " " << v[i].no << " " << v[i].blank << " " << v[i].null << endl;
  }
  }
}
    

int main() {
    vector<Result> v;
    read_data(v);
    sort(v.begin(), v.end(), compara);
    compute_and_print(v);
}