#include <iostream>
#include <vector>
 
using namespace std;
 
// Returns a vector of size n > 0 with n integer values read from cin.
vector<int> read_vector(int n) {
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
       cin >> v[i];
    return v;
}
 
// Prints a vector of size n > 0 in the cout.
void print_vector(const vector<int>& v) {
    for (int i = 0 ; i < int(v.size()) ; ++i) {
        if (i>0) cout<<" ";
        cout<<v[i];
    }
    cout<<endl;
}
 
// add functions or procedures here if you need them
 
// see the statement of the problem
vector<int> reorganize_vector(const vector<int>& v,int a,int b)
{
    // Write your implementation here.
    int n = v.size();
    vector<int> new_vect(n);
    int index=0;
    for (int i = 0; i < n; ++i) {
        if (v[i] < a) {
            new_vect[index] = v[i];
            ++index;
        }
    }
    for (int i = 0; i < n; ++i) {
        if (v[i] >= a and v[i] <= b) {
            new_vect[index] = v[i];
            ++index;
        }
    }
    for (int i = 0; i < n; ++i) {
        if (v[i] > b) {
            new_vect[index] = v[i];
            ++index;
        }
    }
 
    return new_vect;
}
 
int main() {
    int n;
    while (cin >> n) {
         vector<int> v = read_vector(n);
         int a, b;
         cin >> a >> b;
         print_vector(reorganize_vector(v, a, b));
   }
}