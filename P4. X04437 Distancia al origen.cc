#include <iostream>
#include <cmath>
using namespace std;

double dist_or(double x, double y){
    double z=pow(((x*x)+(y*y)),0.5);
    return z;
}

int main() {
    double d1,d2;
    cin >> d1 >> d2;
    cout << dist_or(d1,d2) << endl;
}