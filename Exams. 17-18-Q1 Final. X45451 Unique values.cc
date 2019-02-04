   
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool comp( int a, int b){
  return a<b;
}

bool trobar(const vector<int>& f, int a){
  for(int i=0;i<f.size();++i){
    if(f[i] == a) return true;
  }
  return false;
}


vector<int> unique(vector<int> v){
  
  sort(v.begin(),v.end(),comp);
  
  vector<int>p(0);
   for(int i=0;i<v.size();++i){
     if(i == 0) p.push_back(v[i]);
     if(v.size() > 1 and i< v.size()-1){
       if(v[i] != v[i+1]) p.push_back(v[i+1]);
     }
   }   
   return p;
}
     
     
     
  
  
// reads a sequence of integers fro the standard
// input and returns it in a vector
vector<int> read_vector(int n) {
    vector<int> S(n);
    for (int i = 0; i < n; ++i) 
        cin >> S[i];
    return S;
}

// writes vector v into the standard output
void write_vector(const vector<int>& v) {
    int n = v.size(); 
    cout << "[";
    for (int i = 0; i < n; ++i) { 
        if (i > 0) cout << ", ";
            cout << v[i];
    }
    cout << "]";
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> v = read_vector(n);
        vector<int> u = unique(v);
        cout << "unique("; write_vector(v); 
        cout << ") = "; write_vector(u); 
        cout << endl;
    } 
}    
    