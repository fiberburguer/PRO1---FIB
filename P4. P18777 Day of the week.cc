#include <iostream>
using namespace std;
 
string day_of_the_week (int d, int m, int y){
    int c,a,f;
    m=m-2;
    if (m<=0) {
        m=m+12;
        --y;}
    c=(y/100);
    a=(y%100);
    f = ((2.6 * m) - 0.2);
        f= f + d + a + (a / 4) + (c / 4) - (2 * c);
        while (f < 0) f = f + 7;
        f = f%7;
    while (f < 0) f += 7;
    f = f%7;
    switch (f) {
        case 0:
            return "Sunday";
            break;
        case 1:
            return "Monday";
            break;
        case 2:
            return "Tuesday";
            break;
        case 3:
            return "Wednesday";
            break;
        case 4:
            return "Thursday";
            break;
        case 5:
            return "Friday";
            break;
        case 6:
            return "Saturday";
            break;
        default:
            return "wtf";
            break;
        }
}
   
   
int main(){
    int d, m, y;
    cin >>d>>m>>y;
    cout<<day_of_the_week(d,m,y)<<endl;
}