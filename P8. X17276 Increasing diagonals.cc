#include <iostream>
#include <vector>
using namespace std;
 typedef vector< vector<int> > Matrix;
 
int main(){
    int n,m;
    while (cin >> n >> m){
       
        Matrix diagonal(n, vector<int>(m));
       
        for (int i=0; i<n; ++i){
            for (int j=0; j<m; ++j){
                cin >> diagonal[i][j];
            }
        }
        bool one = false;
        if (n==1 and m==1) one = true;
        int posr, posc;
        cin >> posr >> posc;
        bool mp = true;
        int num = diagonal[posr][posc];
       
        bool frst = true;
       
        for (int i=posr, j=posc; (i<n && j<m && mp) ; ++i, ++j){
           
            if (frst) frst = false;
            else {
                if (num>=diagonal[i][j]) mp = false;
                else if (num<diagonal[i][j]) num = diagonal[i][j];
            }          
        }
       
        if (mp){
            num = diagonal[posr][posc];
            frst = true;
            for (int i=posr, j=posc; (i>=0 && j<m && mp) ; --i, ++j){
           
                if (frst) frst = false;
                else {
                    if (num>=diagonal[i][j]) mp = false;
                    else if (num<diagonal[i][j]) num = diagonal[i][j];
                }          
            }
            if (mp){
                num = diagonal[posr][posc];
                frst = true;
           
                for (int i=posr, j=posc; (i<n && j>=0 && mp) ; ++i, --j){
           
                    if (frst) frst = false;
                    else {
                        if (num>=diagonal[i][j]) mp = false;
                        else if (num<diagonal[i][j]) num = diagonal[i][j];
                    }          
                }
                if (mp){
                    num = diagonal[posr][posc];
                    frst = true;
           
                    for (int i=posr, j=posc; (i>=0 && j>=0 && mp) ; --i, --j){
           
                        if (frst) frst = false;
                        else {
                            if (num>=diagonal[i][j]) mp = false;
                            else if (num<diagonal[i][j]) num = diagonal[i][j];
                        }          
                    }
                }
            }
           
        }
       
        if (one) cout << "yes"<<endl;
        else{
            if (mp) cout << "yes"<<endl;
            else cout << "no"<<endl;
        }      
    }
}
