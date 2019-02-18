#include <iostream>
#include <vector>
using namespace std;
 
void write(vector <vector <bool> >& v) {
    char c;
    for (int i=0; i<v.size(); ++i) {
        for (int j=0; j<v[0].size(); ++j) {
            cin >> c;
            if (c=='B') v[i][j]=1;
        }
    }
}
 
void print(vector <vector <bool> >& v) {
    for (int i=0; i<v.size(); ++i) {
        for (int j=0; j<v[0].size(); ++j) {
            if (v[i][j]) cout<<"B";
            else cout<<".";
        }
        cout<<endl;
    }
}
 
vector <vector <bool> > NextScreen(vector <vector <bool> >& v) {
    vector <vector <bool> > vnext(v.size(),vector <bool>(v[0].size(),0));
    for (int i=0; i<v.size(); ++i) {
        for (int j=0; j<v[0].size(); ++j) {
            int counter = 0;
            if ((i-1>=0 and j-1>=0) and v[i-1][j-1]) ++counter;
            if ((j-1>=0) and v[i][j-1]) ++counter;
            if ((i+1<v.size() and j-1>=0) and v[i+1][j-1]) ++counter;
            if ((i-1>=0) and v[i-1][j]) ++counter;
            if ((i+1<v.size()) and v[i+1][j]) ++counter;
            if ((i-1>=0 and j+1<v[0].size()) and v[i-1][j+1]) ++counter;
            if ((j+1<v[0].size()) and v[i][j+1]) ++counter;
            if ((i+1<v.size() and j+1<v[0].size()) and v[i+1][j+1]) ++counter;
            if (v[i][j] and (counter==2 or counter==3)) vnext[i][j] = true;
            else if ((not v[i][j]) and counter==3) vnext[i][j] = true;
            else vnext[i][j] = false;
        }
    }
    return vnext;
}
           
   
 
   
int main() {
    int n,m;
    cin>>n>>m;
    while (n!=0 and m!=0) {
    vector <vector <bool> > Screen(n,vector <bool>(m,0));
    vector <vector <bool> > ScreenInitial(n,vector <bool>(m,0));
    write(Screen);
    ScreenInitial = NextScreen(Screen);
    print(ScreenInitial);
    cin>>n>>m;
    if (n!=0 and m!=0) cout<<endl;
}
}
 
