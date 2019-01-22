#include <iostream>
using namespace std;
 
int sum_min_max(int x, int y, int z){
    int a,b;
    if (x<=y&&x<=z) a=x;
    else if (y<=x&&y<=z) a=y;
    else a=z;
    if (x>=y&&x>=z) b=x;
    else if (y>=x&&y>=z) b=y;
    else b=z;
    a=a+b;
    return a;}
   
int main(){
    int a,b,c;
    cout<<"A=";
    cin>>a;
    cout<<"B=";
    cin>>b;
    cout<<"C=";
    cin>>c;
    cout<<endl<<sum_min_max(a,b,c)<<endl;
   
    }