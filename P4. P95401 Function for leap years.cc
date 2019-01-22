#include <iostream>
using namespace std;
 
bool is_leap_year(int year) {
    if ((year%100)==0) {
        year=(year/100);
        if ((year%4)==0) return true;
        else return false;
    }
    else if ((year%4)==0) {
        return true;
    }
    else {
        return false;
    }
}
   
   
int main(){
    int y;
    cin >> y;
    if (is_leap_year(y)) cout<<"Valid"<<endl;
    else cout<<"Invalid"<<endl;
}