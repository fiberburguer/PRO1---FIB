#include <iostream>
using namespace std;

void swap2(int& a, int& b){
    int c=a;
    a=b;
    b=c;
}

int main() {
    int a,b;
    cin >> a >> b;
    swap(a,b);
    cout << a << " " << b << endl;
    
}