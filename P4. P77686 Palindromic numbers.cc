#include <iostream>
using namespace std;
 
bool is_palindromic(int n) {
   int x = n, r = 0, z;
   bool v;
   for (int i = 1; x != 0; i++) {
        z = x%10;
        x = x/10;
        r = z+(r*10);
   }
   if (r == n) v = true;
   else v = false;
   return v;
}
   
int main(){
    int n;
    cin >> n;
    cout<<is_palindromic(n)<<endl;
}