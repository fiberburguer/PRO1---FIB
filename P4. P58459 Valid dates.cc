#include <iostream>
using namespace std;
 
bool is_valid_date(int d, int m, int y) {
    bool cor = true;
 
    if(m > 0 and  m <= 12 and m != 2) {
      if((m%2 == 0 and m <= 7) or (m%2 != 0 and m >=8)){
    if (d > 0 and d <= 30) cor = true;
    else cor = false;
      }
      else{
      if (d > 0 and d <= 31) cor = true;
      else cor = false;
      }
    }
       
    else if(m == 2) {
      if((y%4 == 0 and (y%100) != 0) or ((y%100)== 0 and (y/100)%4 == 0)){
    if (d > 0 and d <= 29) cor = true;
    else cor = false;
    }
      else {
    if (d > 0 and d <= 28) cor = true;
    else cor = false;
    }
   }
 
  else cor = false;
 
  return cor;
}
   
   
int main(){
    int d, m, y;
    cin >> d >> m >> y;
    if (is_valid_date(d,m,y)) cout<<"Valid"<<endl;
    else cout<<"Invalid"<<endl;
}