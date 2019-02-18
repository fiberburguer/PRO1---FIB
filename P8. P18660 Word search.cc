#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
typedef vector<vector<char> /**/> Matrix;
 
// mode: [1] = e-d; [2] = d-b; [3] = hor;
bool searchWord(string word, Matrix &sopa, int posROW, int posCOL, string &mode)
{
    mode = "";
    int i = 0;
    int fROW = posROW;
    int fCOL = posCOL;
    int sizeRow = sopa.size();
    int sizeCol = sopa[0].size();
    bool noCabeHori = word.length() > sizeCol - posCOL;
    bool invalidED = noCabeHori;
    bool noCabeVerti = word.length() > sizeRow - posROW;
    bool invalidDB = noCabeVerti;
    bool noCabeDiago = word.length() > min(sizeRow - posROW, sizeCol - posCOL);
    bool invalidHOR = noCabeDiago;
    if (noCabeHori and noCabeVerti)
        return false;
    while ((!invalidED or !invalidDB or !invalidHOR) and i < word.length())
    {
        // e-d:
        if (!noCabeHori)
        {
            if (word[i] != sopa[fROW][posCOL])
                invalidED = true;
            else if (i == word.length() - 1 and !invalidED)
                mode += "1";
        }
        // d-b
        if (!noCabeVerti)
        {
            if (word[i] != sopa[posROW][fCOL])
                invalidDB = true;
            else if (i == word.length() - 1 and !invalidDB)
                mode += "2";
        }
        // hor
        if (!noCabeDiago)
        {
            if (word[i] != sopa[posROW][posCOL])
                invalidHOR = true;
            else if (i == word.length() - 1 and !invalidHOR)
                mode += "3";
        }
        ++posCOL;
        ++posROW;
        ++i;
    }
 
    if (mode != "")
        return true;
    return false;
}
int main()
{
    bool isFirst = true;
    int nwords, filas, columnas;
    string mode;
 
    while (cin >> nwords)
    {
        cin >> filas >> columnas;
        vector<string> palabras(nwords);
        Matrix sopa(filas, vector<char>(columnas));
        Matrix resultado(filas, vector<char>(columnas));
 
        for (int i = 0; i < nwords; ++i)
            cin >> palabras[i];
 
        for (int i = 0; i < filas; ++i)
            for (int j = 0; j < columnas; ++j)
            {
                cin >> sopa[i][j];
                resultado[i][j] = sopa[i][j];
            }
 
        for (int i = 0; i < filas; ++i)
        {
            for (int j = 0; j < columnas; ++j)
            {
                for (int k = 0; k < nwords; ++k)
                {
                    if (searchWord(palabras[k], sopa, i, j, mode))
                    {
                        for (int l = 0; l < mode.length(); ++l)
                        {
                            if (mode[l] == '1')
                            {
                                for (int c = j; c < j + palabras[k].length(); ++c)
                                    resultado[i][c] = (resultado[i][c] >= 'a' ? resultado[i][c] - ('a' - 'A') : resultado[i][c]);
                            }
                            else if (mode[l] == '2')
                            {
                                for (int c = i; c < i + palabras[k].length(); ++c)
                                    resultado[c][j] = (resultado[c][j] >= 'a' ? resultado[c][j] - ('a' - 'A') : resultado[c][j]);
                            }
                            else if (mode[l] == '3')
                            {
                                for (int c = 0; c < +palabras[k].length(); ++c)
                                    resultado[c + i][c + j] = (resultado[c + i][c + j] >= 'a' ? resultado[c + i][c + j] - ('a' - 'A') : resultado[c + i][c + j]);
                            }
                        }
                    }
                }
            }
        }
 
        if (isFirst)
            isFirst = false;
        else
            cout << endl;
        for (int i = 0; i < filas; ++i)
        {
            isFirst = true;
            for (int j = 0; j < columnas; ++j)
            {
                if (isFirst)
                    isFirst = false;
                else
                    cout << " ";
                cout << resultado[i][j];
            }
            cout << endl;
        }
        isFirst = false;
    }
}
