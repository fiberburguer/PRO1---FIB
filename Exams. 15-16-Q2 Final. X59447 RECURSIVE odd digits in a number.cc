#include <iostream>
using namespace std;

int number_of_odd_digits(int n){
    if(n<10){
        if(n%2 != 0) return 1;
        else return 0;
    }
    
    else{
        if(n%2 != 0) return 1 + number_of_odd_digits(n/10);
        else return 0 + number_of_odd_digits(n/10);
    }
}

int main(){
    int x;
    while(cin >> x){
        cout << number_of_odd_digits(x) << endl;
    }
}