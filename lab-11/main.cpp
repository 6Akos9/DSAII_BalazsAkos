#include <iostream>
#include "Functions.h"

int main() {
    ifstream file("bemenet.txt");
    int n;
    file >> n;
    Szemely szemelyek[n];
    string vezeteknev, keresztnev;
    for (int i = 0; i < n; ++i) {
        file >> vezeteknev >> keresztnev >> szemelyek[i].eletkor >> szemelyek[i].nem >> szemelyek[i].emelet;
        szemelyek[i].nev = vezeteknev + " " + keresztnev;
    }
    file.close();
    kiir(szemelyek, n);
    atlagEletkor(szemelyek, n);
    sorrend(szemelyek, n);
    int minimumVarakozasiIdo = minimalisVarakozasiIdo(szemelyek, n);
    cout << "A minimum varakozasi ido: " << minimumVarakozasiIdo << endl;
    return 0;
}
