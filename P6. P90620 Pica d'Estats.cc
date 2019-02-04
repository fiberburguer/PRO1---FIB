#include <iostream>
using namespace std;

int main(){
    bool estats = false;
    bool pica = false;
    int primer = 0;
    cin >> primer;
    int seguent = 0;
    while(cin >> seguent and seguent!=0){
        if(pica == false and seguent > primer){
            pica = true;
            primer = seguent;
        }
        if(pica == false and seguent < primer){
            primer = seguent;
        }
        if(pica == true and seguent < primer){
            if( primer > 3143) estats = true;
            else primer = seguent;
        }
        if(pica == true and seguent > primer){
            primer = seguent;
        }
    }
    if(estats) cout << "SI" << endl;
    else cout << "NO" << endl;
}