#include <iostream>
using namespace std;
 
void decompose(int n, int& h, int& m, int& s) {
    h=n/3600;
    n=n%3600;
    m=n/60;
    s=n%60;
}
   
   
   
int main(){
    int n, h=0, m=0, s=0;
    cin >> n;
    decompose(n,h,m,s);
    cout<<h<<" "<<m<<" "<<s<<endl;
}