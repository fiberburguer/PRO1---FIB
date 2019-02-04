#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
struct equipo{
   string nombre;
   int total, pg, pe, pp;
};
 
equipo lee_equipo()
{
    equipo e;
    cin >> e.total >> e.pg >> e.pe >> e.pp >> e.nombre;
    return e;
}
 
bool comp(const equipo& e1, const equipo& e2)
{
    if(e1.total == e2.total)
    {
        if(e1.pg == e2.pg)
        {
            if(e1.pe == e2.pe)
            {
                return e1.nombre < e2.nombre;
            }
            else return e1.pe > e2.pe;
        }
        else return e1.pg > e2.pg;
    }
    else return e1.total > e2.total;
}
 
void escribe_equipos(const vector<equipo> lista)
{
    int size = lista.size();
    for(int i = 0; i < size; ++i)
    {
        cout << lista[i].nombre << " " << lista[i].total << " " << lista[i].pg << " " << lista[i].pe << " " << lista[i].pp << endl;
    }
}
 
int main()
{
    int n;
    cin >> n;
    vector<equipo> lista(n);
    for(int i = 0; i < n; ++i) lista[i] = lee_equipo();
    sort(lista.begin(), lista.end(), comp);
    escribe_equipos(lista);
}