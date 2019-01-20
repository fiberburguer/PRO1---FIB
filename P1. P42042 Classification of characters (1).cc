#include <iostream>
using namespace std;
// a=97 e=101
int main() {
    char x;
    cin >> x;
    if (isupper(x)) {
        cout << "uppercase" << endl;
    }
    else {
        cout << "lowercase" << endl;
    }
    if (tolower(x)=='a'||tolower(x)=='e'||tolower(x)=='i'||tolower(x)=='o'||tolower(x)=='u') {
        cout << "vowel" << endl;
    }
    else {
        cout << "consonant" << endl;
    }
}