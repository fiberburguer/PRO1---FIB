#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n;
    while (cin>>n) {
        if (n>0) {
        vector <vector <bool> > screen(n,(vector<bool>(n,1)));
        int x = 0;
        int y = 0;
        if (n>1) screen[y][x]=0;
        int i=n-1;
        while (i>0) {
            //Down
            while (y+2<n && screen[y+2][x]==1) {
                ++y;
                screen[y][x]=0;
            }
            --i;
            //Right
            while (x+2<n && screen[y][x+2]==1) {
                ++x;
                screen[y][x]=0;
            }
            --i;
            //Up
            while (y-2>=0 && screen[y-2][x]==1) {
                --y;
                screen[y][x]=0;
            }
            --i;
            //Left
            while (x-2>=0 && screen[y][x-2]==1) {
                --x;
                screen[y][x]=0;
            }
            --i;
        }
        for (i=0;i<n;++i) {
            for (int j=0; j<n; ++j) {
                if (screen[i][j]==0) cout<<".";
                else cout<<"X";
            }
        cout<<endl;
        }
        cout<<endl;
        }
    }
}
