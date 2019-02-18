#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
bool contains(string s1, string s2)
{
    int i = 0;
    bool last_check = false;
   
    while(i < s1.length() and not last_check)
    {
        int j = 0;
        bool check = true;
        while(j < s2.length() and check)
        {
            check = true;
            if(s1[i+j] != s2 [j]) check = false;
            ++j;
            last_check = check;
        }
        ++i;
    }
    return last_check;
}
 
int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i = 0; i < n; ++i) cin >> v[i];
   
    for(int i = 0; i < n; ++i)
    {
        cout << v[i] << ":";
        int j = 0;
        while(j < n)
        {
            if(v[i].size() >= v[j].size() and contains(v[i], v[j])) cout << " " << v[j];
            ++j;
        }
        cout << endl;
    }
}
