#include <iostream>
using namespace std;
 
int main() {
  int d, m, a;
  while (cin >> d >> m >> a){
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
      if((a%4 == 0 and (a%100) != 0) or ((a%100)== 0 and (a/100)%4 == 0)){
    if (d > 0 and d <= 29) cor = true;
    else cor = false;
    }
      else {
    if (d > 0 and d <= 28) cor = true;
    else cor = false;
    }
   }
 
  else cor = false;
 
  if(cor == true) cout << "Correct Date" << endl;
  else cout << "Incorrect Date" << endl;
 
   
  }
}