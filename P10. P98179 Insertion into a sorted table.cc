#include <iostream>
#include <vector>
using namespace std;
 
 
void insert(vector<double>& v) {
        int siz = v.size();
        for (int i = 1; i < siz; ++i)  {
                double x = v[i];
                int j = i;
                while (j > 0 && x < v[j - 1]) {
                        v[j] = v[j - 1];
                        --j;
                }
                v[j] = x;
        }
}
