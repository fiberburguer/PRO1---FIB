#include <iostream>
#include <vector>
using namespace std;
 
struct Persona {
    string nom;
    bool dona;
    int edat;
};
 
int main() {
    vector <Persona> dones(0);
    Persona input;
    int edatMaxima=30, n;
    cin>>n;
    for (int i=0; i<n; ++i) {
        cin>>input.nom;
        string s;
        cin>>s;
        if (s=="dona") input.dona = true;
        else input.dona = false;
        cin>>input.edat;
       
        if (input.dona) dones.push_back(input);
        else if (input.edat>edatMaxima) edatMaxima=input.edat;
    }
    for (int i=0; i<dones.size(); ++i) if (dones[i].edat<edatMaxima) cout<<dones[i].nom<<" "<<dones[i].edat<<endl;
}
