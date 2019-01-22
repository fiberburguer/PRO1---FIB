#include <iostream>
using namespace std;

int main() {
  char x;
  cin >> x;
  if (x >='a' and x<='z') {cout << "Lowercase letter" << endl;}
  else if (x >='A' and x<='Z') {cout << "Uppercase letter" << endl;}
  else if (x >='0' and x<='9') {cout << "Number" << endl;}
}