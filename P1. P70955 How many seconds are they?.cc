#include <iostream>
 
using namespace std;
 
int main() {
    int years, days, hours, minutes, seconds;
    cin >> years >> days >> hours >> minutes >> seconds;
    cout << ((years*365*24*60*60)+(days*24*60*60)+(hours*60*60)+(minutes*60)+seconds) << endl;
}