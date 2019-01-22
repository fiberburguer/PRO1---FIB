#include <iostream>
#include <string>
using namespace std;
 
 
int main () {
string s;
int i = 0;
 
while (cin >> s) {
    if (s == "hello") ++i;
}
cout << i << endl;
}