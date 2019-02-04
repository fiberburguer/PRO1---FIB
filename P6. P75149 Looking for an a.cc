#include <iostream>
using namespace std;
 
 
int main() {
    char c;
    bool isThereAnyA=false;
    while (cin>>c&&c!='a'&&c!='.') {}
    if (c=='a') isThereAnyA=true;
   
   
    if (isThereAnyA) cout << "yes"<<endl;
    else cout << "no"<<endl;
}