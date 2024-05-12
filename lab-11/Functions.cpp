//
// Created by balaz on 2024. 05. 12..
//

#include "Functions.h"

void kiir(Szemely szemelyek[], int n) {
    cout << "Szmelyek es a szemlyek adatai: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << szemelyek[i].nev << " " << szemelyek[i].eletkor << " " << szemelyek[i].nem << " " << szemelyek[i].emelet
             << endl;
    }
}

void atlagEletkor(Szemely *szemelyek, int n) {
    int osszesFerfiEletkor = 0, osszesNoiEletkor = 0;
    int ferfi = 0, no = 0;
    for (int i = 0; i < n; ++i) {
        if (szemelyek[i].nem == 1) {
            osszesFerfiEletkor += szemelyek[i].eletkor;
            ferfi++;
        } else {
            osszesNoiEletkor += szemelyek[i].eletkor;
            no++;
        }
    }
    double atlagFerfi = osszesFerfiEletkor / ferfi;
    double atlagNoi = osszesNoiEletkor / no;
    cout << "A ferfiak atlag eletkora: " << atlagFerfi << endl;
    cout << "A nok atlag eletkora: " << atlagNoi << endl;
}

bool emeletOsszehasonlitas(const Szemely &a, const Szemely &b) {
    return a.emelet < b.emelet;
}

void sorrend(Szemely szemelyek[], int n) {
    sort(szemelyek, szemelyek + n, emeletOsszehasonlitas);
    cout << "Sorrend: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << szemelyek[i].nev << " ";
    }
    cout << endl;
}

int minimalisVarakozasiIdo(Szemely szemelyek[], int n) {
    sorrend(szemelyek, n);
    int varakozasi_ido = 0;
    int novekvo_ertek = 0;
    for (int i = 0; i < n; ++i) {
        varakozasi_ido += novekvo_ertek;
        novekvo_ertek += 2 * (i + 1);
    }
    varakozasi_ido -= n * (n - 1);
    return varakozasi_ido;
}