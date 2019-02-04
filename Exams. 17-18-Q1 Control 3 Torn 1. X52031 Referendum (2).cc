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

int votats(vector<Result>& v, int i){
  int sum= (v[i].yes + v[i].no + v[i].blank + v[i].null);
  
  if(sum == 0) return 0;
  else return (sum*100)/(v[i].voters);
}

void compute_and_print(vector<Result>& v){
   int k= v.size();
   for(int i=0;i<k;++i){
     if(v[i].district == v[i+1].district){
       if(votats(v,i) >= votats(v,i+1)){
	 swap(v[i],v[i+1]);
       }
     }
     else if((v[i].district != v[i+1].district) or ( i == k-1)){
       double sum = v[i].yes+ v[i].no + v[i].blank + v[i].null;
       double percent = (sum*100)/v[i].voters;
       cout << v[i].district << " " << v[i].city << " " << percent << " " << v[i].voters << " " << sum;
       cout << " " << v[i].voters - sum << " " << v[i].yes << " " << v[i].no << " " << v[i].blank;
       cout << " "  << v[i].null << endl;
     }
   }
}

int main() {
    vector<Result> v;
    read_data(v);
    sort(v.begin(), v.end(), compara);
    compute_and_print(v);
}