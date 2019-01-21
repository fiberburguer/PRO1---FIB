#include <iostream>
using namespace std;
 
int main() {
    int d,n,t,a,w;
    w=0;
    cin >> d >> n >> t;
    while (cin >> a){
        n-=d;
        n+=a;
        if (n>0) w++;
    }
    cout << w << endl;
}