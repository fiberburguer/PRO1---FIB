#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
void write(vector<int>& v){
  for (int i=0; i<v.size(); ++i){
    cin>>v[i];
  }
  }
void print(vector<int>& v) {
    cout<<v[v.size()-1];
    for (int i=v.size()-2;i>=0;--i) cout<<" "<<v[i];
    cout<<endl;
}
 
int main() {
    int n;
    while (cin>>n) {
        if (n>0) {
            vector <int> v(n);
            write(v);
            sort(v.begin(),v.end());
            print(v);
        }
        else cout<<endl;
    }
}
