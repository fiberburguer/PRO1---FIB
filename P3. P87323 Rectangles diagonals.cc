#include <iostream>
using namespace std;
 
int main(){
 
    int x,z;
    int i=0;
    cin >> x >> z;
 
    for (int row=0;row<x;++row){
        for (int column=0;column<z;++column){
            if (column<=i){
                cout << (i-column)%10;
            }
            else{
                cout << (column-i)%10;
            }
        }
        ++i;
        cout << endl;
    }
}