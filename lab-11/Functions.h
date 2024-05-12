//
// Created by balaz on 2024. 05. 12..
//

#ifndef LAB_11_FUNCTIONS_H
#define LAB_11_FUNCTIONS_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Szemely {
    string nev;
    int eletkor;
    int nem;
    int emelet;
};

void kiir(Szemely szemelyek[], int n);

void atlagEletkor(Szemely szemelyek[], int n);

bool emeletOsszehasonlitas(const Szemely &a, const Szemely &b);

void sorrend(Szemely szemelyek[], int n);

int minimalisVarakozasiIdo(Szemely szemelyek[], int n);

#endif //LAB_11_FUNCTIONS_H
