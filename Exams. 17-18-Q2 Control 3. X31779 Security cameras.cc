#include <iostream>
#include <vector>
using namespace std;

typedef vector <vector <int> > Room;

// Pre: n, m integers greater than 0
// Post: it returns a valid n*m Room
Room read_room(int n, int m) {
  Room room (n,vector<int>(m));
    for (int i=0;i<n;++i){
      for(int j=0;j<m;++j){
	cin >> room[i][j];
      }
    }
    return room;// YOUR CODE HERE
}

// Pre: room is a valid Room
// Post: it returns the value of those objects that are not monitored by any of the security cameras in room, no matter the final value of room
int non_monitored_objects(const Room& room) {
  int suma = 0;
  int k = room.size();
  int l = room[0].size();
    for(int i=0;i<k;++i){
      for(int j=0;j<l;++j){
	if(room[i][j] != -1){
	  suma += room[i][j];
	}
	else{
	  l = l - (l-j);
	}
      }
    }
    if(suma == 0) return 0;
    else return suma;
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        Room room = read_room(n, m);
        cout << non_monitored_objects(room) << endl;
    }
}   