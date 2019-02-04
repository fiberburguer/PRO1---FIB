#include <iostream>
using namespace std;

int main(){
    int x;
    while(cin >> x){
        int max;
        cin >> max;
        int seguent;
        for(int i=0;i<x-1;++i){
            cin >> seguent;
            if(seguent > max) max = seguent;
        }
        cout << max << endl;
    }
}