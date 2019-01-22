#include <iostream>
using namespace std;

bool c_frac(int n1, int d1, int n2, int d2){
    double mn1=n1,mn2=n2,md1=d1,md2=d2;
    if((mn1/md1) < (mn2/md2)) return true;
    else return false;
}

int main () {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << c_frac(a,b,c,d) << endl;
}