#include <iostream>
using namespace std;
 
int main () {
        int x1,x=1,t=0;
        string n;
        cin >> x1;
        while (x<=x1) {
            cin >> n;
            t = t + (n[x-1] - 48) + (n[x1-x] - 48);
            if ((x-1) == (x1-x)) t=t-(n[x-1]-48);
            x++;
        }
        cout << t << endl;
    }