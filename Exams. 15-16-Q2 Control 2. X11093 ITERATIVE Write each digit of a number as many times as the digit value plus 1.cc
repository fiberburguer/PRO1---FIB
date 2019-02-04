#include <iostream>
using namespace std;

void count_and_remove_trailing_zeros(int n, int& tz) {
  tz = 0;
  while (n % 10 == 0) {
    n /= 10;
    ++tz;
  }
}

int reverse (int n) {
  int result = 0;
  while (n != 0) {
    result = result * 10 + (n % 10);
    n /= 10;
  }
  return result;
}

// Pre: 0<=d<=9 and 0<=x.
void write_digit(int d,int x) {
    for (int i = 1; i <= x; ++i)
      cout << d;
}

// Pre: 0<n.
void write_expanded(int n) {
    int tz;
    count_and_remove_trailing_zeros(n, tz);
    n = reverse(n);
    
    while (n != 0) {
      int last_digit = n % 10;
      write_digit(last_digit, last_digit + 1);
      n /= 10;
    }
    write_digit(0, tz);
}

int main() {
    int n;
    while (cin >> n) {
        write_expanded(n);
        cout << endl;
    }
}