#include <iostream>
#include <string>
using namespace std;

int main () {
	string paraula;
	bool principi = false;
	int cont = 0;
	
	while (cin >> paraula and paraula != "end") {
		if (principi) ++cont;
		else if (paraula == "beginning") principi = true;
	}
	if (principi and paraula == "end") cout << cont << endl;
	else cout << "wrong sequence" << endl;
}