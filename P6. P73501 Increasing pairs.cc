#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    for(int i=0; i<x; ++i){
        int count = 0;
        int primer = 0;
        int segon = 0;
        cin >> primer;
        while(primer > 0){
            cin >> segon;
        if(segon > primer) ++count;
        primer = segon;
        }
        cout << count << endl;
    }
}