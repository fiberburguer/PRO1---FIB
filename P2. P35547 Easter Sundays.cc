#include <iostream>
using namespace std;
 
int main() {
    int Y,M,D;
    while (cin >> Y) {
        int k = (Y/100);
        int x = (Y%19);
        int b = (Y%4);
        int c = (Y%7);
        int q = (k/4);
        int p = ((13+(8*k))/25);
        int y = ((15-p+k-q)%30);
        int z = (((19*x)+y)%30);
        int n = ((4+k-q)%7);
        int e = (((2*b)+(4*c)+(6*z)+n)%7);
       
        if ((z+e)<=9) {
            D = (22+z+e);
            M = 3;}
        else if (z==29 && e==6) {
            D = 19;
            M = 4;}
        else if (z==28 && e==6 && x>10) {
            D = 18;
            M = 4;}
        else {
            D = (z+e-9);
            M = 4;}
       
        cout << D << "/" << M << endl;
    }
}