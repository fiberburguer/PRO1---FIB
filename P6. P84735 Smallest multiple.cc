#include <iostream>
using namespace std;
 
 
 
int main() {
    int a,b,n=1;
    while (cin>>a>>b) {
        if (a%b!=0) a=((a/b)+1)*b;
        cout<<"#"<<n<<" : "<<a<<endl;
        n++;
    }
       
}