#include <iostream>
using namespace std;
 
 
 
int main() {
    int length,n=0;
    char c;
    cin>>length;
    while (cin>>c){
        switch (c) {
            case 'a':
                cout<<".-";
                n+=2;
                break;
            case 'e':
                cout<<".";
                n+=1;
                break;
            case 'i':
                cout<<"..";
                n+=2;
                break;
            case 'o':
                cout<<"---";
                n+=3;
                break;
            case 'u':
                cout<<"..-";
                n+=3;
                break;
        }
        if (n>=length) {
            cout<<endl;
            n=0;
        }
    }
    if (n!=0) cout<<endl;
    cout<<"STOP"<<endl;
}