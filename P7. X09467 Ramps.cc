#include <iostream>
#include <vector>
using namespace std;
 
vector<bool> ramps_pos(const vector <int>& V) {
    vector<bool> ramps(V.size());
    for(int i = 0; i < V.size() - 2; ++i) {
        if((V[i] < V[i+1] and V[i+1] < V[i+2])
           or (V[i] > V[i+1] and V[i+1] > V[i+2])) ramps[i] = true;
    }
    return ramps;
}
 
int pot_conflictive(const vector <bool>& B) {
    int count = 0;
    for(int j = 0; j < B.size() - 2; ++j) {
        if(B[j] and B[j+1]) ++count;
        if(B[j] and B[j+2]) ++count;
    }
    return count;
}
 
int main() {
    int n;
    while (cin >> n) {
        vector<int> V(n);
        for(int i = 0; i < n; ++i) cin >> V[i];
        vector<bool> ramps(n);
        ramps = ramps_pos(V);
        int m = pot_conflictive(ramps);
        cout << "positions with a ramp:";
        for(int j = 0; j < n; ++j)
            if(ramps[j]) cout << " " << j;
        cout << endl << "potentially conflictive: " << m << endl << "---" << endl;
    }
}