#include <iostream>
#include <vector>
using namespace std;
 
vector<double> intersection(const vector<double>& v1, const vector<double>& v2) {
    vector <double> C(0);
    int i=0, j=0;
    while (i<v1.size() and j<v2.size()) {
        if (v1[i]==v2[j]) C.push_back(v1[i]);
        if (v1[i]>v2[j]) do {++j;} while (v2[j] == v2[j-1]);
        else do {++i;} while (v1[i] == v1[i-1]);
    }
    return C;
}
 
 
int main() {
    int n;
    cout<<"Vector 1:"<<endl;
    cin>>n;
    vector <double> V1(n);
    for (int i=0; i<n; ++i) cin>>V1[i];
    cout<<endl<<"Vector 2:"<<endl;
    cin>>n;
    vector <double> V2(n);
    for (int i=0; i<n; ++i) cin>>V2[i];
    vector <double> C = intersection(V1,V2);
    cout<<endl<<endl<<"Intersection:"<<endl;
    for (int i=0; i<C.size(); ++i) cout<<C[i]<<" ";
    cout<<endl;
}
