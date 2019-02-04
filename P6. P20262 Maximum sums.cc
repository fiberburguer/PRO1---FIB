#include <iostream>
using namespace std;
 
int main() {
    int length;
    while (cin>>length) {
        int numbers[length];
        for (int i=0; i<length; i++) cin>>numbers[i];
       
       
        //  MaximumSums(length,numbers)
        //     void MaximumSums(int length, int numbers) {
    int max=0, sum=0;
    for (int i=0; i<length; i++) {
        sum=sum+numbers[i];
        if (sum>max) max=sum;
    }
    cout << max << " ";
    max=0;
    sum=0;
    for (int i=length-1;i>=0;i--) {
        sum=sum+numbers[i];
        if (sum>max) max=sum;
    }
    cout << max << endl;
}
       
}