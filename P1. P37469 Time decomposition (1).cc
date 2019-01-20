#include <iostream>
using namespace std;
 
int main() {
 int n, h, m, s;
 cin >> n;
 s = n%60;
 m = n/60;
 h = m/60;
 m = m%60;
 cout << h << " " << m << " " << s << endl;
}